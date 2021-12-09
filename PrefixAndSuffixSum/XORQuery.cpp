vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    int n = queries.size();
    vector<int> xorDiff(n+1,0);
    vector<int>ans;
    
    for(int i =0; i<n;i++){
        int qType = queries[i][0];
        int val = queries[i][1];
        if(qType == 1){
            ans.push_back(val);
        } else {
            int r = ans.size();
            xorDiff[0] = xorDiff[0]^val;
            xorDiff[r] = xorDiff[r]^val;
        }
    }
    
    int m= ans.size();
    for(int j=1; j<=m;j++){
        xorDiff[j]= xorDiff[j-1]^xorDiff[j];
    }
    for(int j=0; j<m;j++){
        ans[j] = ans[j]^xorDiff[j];
    }
    return ans;
    
}