#include<bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int sL = -1;
    sort(arr.begin(), arr.end());

    int l = arr[n - 1];
    for (int j = n - 2; j >= 0; j--) {
        if (arr[j] != l) {
            sL = arr[j];
            return sL;
        }
    }

    return sL;
}