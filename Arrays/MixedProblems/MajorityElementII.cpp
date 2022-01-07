#include<bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int, int>mp;
    vector<int> ans;
    for (int i = 0 ; i < arr.size(); i++) {
        mp[arr[i]]++;
        if ((mp[arr[i]] > floor(arr.size() / 3)) && !(mp[arr[i]] > floor(arr.size() / 3 + 1))) {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}