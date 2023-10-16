/*
Author: Priyansh Gupta
Date: Oct 12, 2023
Problem URL: https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int index = 0; index < nums.size(); index++) 
        {
            if (map.count(target - nums[index])) return {map[target - nums[index]], index};
            map[nums[index]] = index;
        }
        return {};
    }
};
