#include<bits/stdc++.h>
vector<int> printArrayAfterKOperations(vector<int> &arr, int n, int k) {
    if (k == 0) return arr;
    // Write your code here.
    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0 ; i < n; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = mx - arr[i];
    }

    if (mn == 0) {
        if (k % 2 == 0) return arr;
        else return ans;
    } else {
        if ((k - 1) % 2 == 0) return ans;
        vector<int> sans(n);
        for (int i = 0; i < n; i++) {
            sans[i] = (mx - mn) - ans[i];
        }

        return sans;
    }
}
