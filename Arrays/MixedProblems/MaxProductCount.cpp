#include<bits/stdc++.h>
vector<long long> maxProductCount(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<long long, long long> mp;

    for (int i = 0 ; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long pr = (long long) arr[i] * (long long) arr[j];
            mp[pr]++;
        }
    }
    long long mP = 0;
    long long count = 0;

    for (auto x : mp) {
        long long pro = x.first;
        long long cnt = x.second;

        if (cnt > 1 && cnt > count) {
            mP = pro;
            count = cnt;
        }

        if (cnt == count && pro < mP) {
            mP = pro;
        }
    }

    return {mP, (count)*(count - 1) / 2};

}