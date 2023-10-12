/*
Author: Priyansh Gupta
Date: Oct 12, 2023
Problem URL: https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (numMap.count(target - nums[i])) return {numMap[target - nums[i]], i};
            numMap[nums[i]] = i;
        }
        return {};
    }
};
