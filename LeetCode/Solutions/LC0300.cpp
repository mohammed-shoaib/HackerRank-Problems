/*
Problem Statement: https://leetcode.com/problems/longest-increasing-subsequence/
Time: O(n • log n)
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		vector<int> lis;
		for (int& num: nums) {
			auto it = lower_bound(lis.begin(), lis.end(), num);
			if (it == lis.end())
				lis.push_back(num);
			else
				*it = num;
		}
		return lis.size();
	}
};