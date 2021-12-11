// https://www.youtube.com/watch?v=QM0klnvTQzk
#include<map>
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    map<int, int> mp ;
    int n = arr.size();
    long long sum = 0;
    long long rem = 0;
    mp.insert({0, 1});
    int cnt = 0 ;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        rem = sum % k;
        if (rem < 0) {
            rem += k;
        }
        if (mp.count(rem) == 0) {
            mp.insert({rem, 1});
        } else {
            cnt += mp[rem];
            mp[rem] = mp[rem] + 1;
        }

    }


    return cnt;
}
