#include<algorithm>
bool possibleToMakeTriangle(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    sort(a.begin(), a.end());

    for (int i = 0 ; i < n - 2; i++) {
        if (a[i] + a[i + 1] > a[i + 2]) {
            return true;
        }
    }
    return false;
}