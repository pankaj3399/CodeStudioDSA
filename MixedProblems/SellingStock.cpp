#include<bits/stdc++.h>
long dp[2][100001];
long getMaxProfitHelper(int stock, int day, int n, long *values) {
    if (day >= n) {
        return 0;
    }

    if (dp[stock][day] != -1) return dp[stock][day];

    if (stock == 0) {
        long op1 = -values[day] + getMaxProfitHelper(1, day + 1, n, values);
        long op2 = getMaxProfitHelper(0, day + 1, n, values);
        return dp[stock][day] = max(op1, op2);
    } else {
        long op1 = values[day] + getMaxProfitHelper(0, day + 1, n, values);
        long op2 = getMaxProfitHelper(1, day + 1, n, values);
        return dp[stock][day] = max(op1, op2);
    }

}

long getMaximumProfit(long *values, int n)
{
    //Write your code here
    memset(dp, -1, sizeof dp);
    return getMaxProfitHelper(0, 0, n, values);
}