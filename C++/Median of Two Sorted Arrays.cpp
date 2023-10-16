/*
Author: Priyansh Gupta
Date: Oct 16, 2023
Problem URL: https://leetcode.com/problems/median-of-two-sorted-arrays/
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        sort(nums.begin(), nums.end()); int sum = nums.size();
        return sum%2==1 ? static_cast<double>(nums[sum/2]) : (static_cast<double>(nums[(sum/2)-1]) + static_cast<double>(nums[sum/2]))/2.0;
    }
};
