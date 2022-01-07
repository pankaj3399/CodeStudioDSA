// https://www.youtube.com/watch?v=-FgseNO-6Gk
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    // write your code here
    int mxRectSum = INT_MIN ;

    for (int i = 0 ; i < m ; i++) {
        vector<int>rowSum(n);
        for (int z = 0 ; z < n; z++) {
            rowSum[z] = arr[z][i];
        }
        for (int j = i ; j < m; j++) {
            if (j != i) {
                for (int z = 0 ; z < n; z++) {
                    rowSum[z] += arr[z][j];
                }
            }
            int mxSum = INT_MIN;
            int cSum = 0;
            for (int k = 0 ; k < n; k++) {
                cSum += rowSum[k];
                mxSum = max(mxSum, cSum);
                if (cSum < 0) {
                    cSum = 0 ;
                }
            }
            mxRectSum = max(mxRectSum, mxSum);
        }
    }

    return mxRectSum;
}
