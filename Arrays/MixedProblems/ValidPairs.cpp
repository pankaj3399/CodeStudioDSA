// https://www.youtube.com/watch?v=BvKv-118twg&ab_channel=Pepcoding
#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    if (n % 2 != 0) return false;
    // Write your code here.
    unordered_map<int, int> mp;

    for (int i = 0 ; i < n; i++) {
        mp[arr[i] % k]++;
    }

    for (auto x : mp) {
        int no = x.first;
        int fq = x.second;
        int fq2;
        if (no <= m) {
            fq2 = mp[m - no];
            if (fq != fq2) return false;
        } else {
            fq2 = mp[m - no + k];
            if (fq != fq2) return false;
        }
    }

    return true;


}