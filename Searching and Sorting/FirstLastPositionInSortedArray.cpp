#include <algorithm>
pair<int, int> findFirstLastPosition(vector<int> &v, int n, int x)
{
    // Write your code here.
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), x);
    upper = upper_bound(v.begin(), v.end(), x);

    if (*lower == x) {
        return {lower - v.begin(), upper - v.begin() - 1};
    } else {
        return { -1, -1};
    }

}

