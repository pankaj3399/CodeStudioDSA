#include<algorithm>
int bestInsertPos(vector<int> arr, int n, int m)
{
    // Write your code here.
    int ub = upper_bound(arr.begin(), arr.end(), m) - arr.begin();
    if (ub == 0) return ub;
    // check if ub-1 is element
    if (arr[ub - 1] == m) {
        return ub - 1;
    } else {
        return ub;
    }

}