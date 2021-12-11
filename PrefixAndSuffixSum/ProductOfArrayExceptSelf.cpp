int *getProductArrayExceptSelf(int *arr, int n)
{
    int * res = new int[n];
    if (n == 0) return res;
    //Write your code here
    long long mod = 1e9 + 7;
    int * pre = new int[n];
    pre[0] = 1;
    for (int i = 1; i < n; i++) {
        pre[i] = ((pre[i - 1] % mod) * (arr[i - 1] % mod)) % mod;
    }

    int *suff = new int[n];
    suff[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = ((suff[i + 1] % mod) * (arr[i + 1] % mod)) % mod;
    }


    for (int i = 0; i < n; i++) {
        res[i] = ((pre[i] % mod) * (suff[i] % mod)) % mod;
    }

    return res;

}