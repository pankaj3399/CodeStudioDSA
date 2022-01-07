// https://www.youtube.com/watch?v=qgizvmgeyUM&ab_channel=takeUforward
#include<bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
	// Write your code here.
	unordered_set<int> s;
	int ans = 1 ;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}


	for (int i = 0; i < n; i++) {
		if (s.find(arr[i] - 1) == s.end()) {
			int curr = 1;
			while (s.find(arr[i] + curr) != s.end()) {
				curr++;
			}
			ans = max(ans, curr);
		}
	}

	return ans;
}