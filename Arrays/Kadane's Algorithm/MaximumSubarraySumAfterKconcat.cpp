// https://www.youtube.com/watch?v=qnoOu5Usb4o
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{

    if (k == 1) {

        long long mxSum = -1e9;
        long long sum  = 0 ;

        for (int i = 0 ; i < n; i++) {
            sum += arr[i];
            mxSum = max(mxSum , sum);
            if (sum < 0) {
                sum = 0;
            }
        }

        return mxSum;

    } else {

        long long mxSum = -1e9;
        long long sum  = 0 ;
        long long rSum = 0 ;

        for (int i = 0 ; i < 2 * n; i++) {
            if (i < n) {
                rSum += arr[i];
            }
            sum += arr[i % n];
            mxSum = max(mxSum , sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        if (rSum < 0) {
            return mxSum;
        } else {
            return mxSum + (k - 2) * rSum;
        }
    }
}