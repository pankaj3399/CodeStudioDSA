
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    vector<int>ans;
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i]  = prefix[i - 1] + arr[i - 1];
    }

    int qSize = queries.size();
    int j = 0;
    while (qSize --) {
        long long left = queries[j][0] - 1;
        long long right = queries[j][1];

        long long leftMod = left % n;
        long long rightMod  = right % n;
        long long leftQ = left / n;
        long long rightQ  = right / n;

        long long diff = rightQ - leftQ ;
        long long tBeAdd = prefix[rightMod] - prefix[leftMod];


        long long qAns = ((diff % 1000000007) * (prefix[n] % 1000000007) + (tBeAdd % 1000000007)) % 1000000007;
        ans.push_back(qAns);
        j++;
    }

    return ans;
}