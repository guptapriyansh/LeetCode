/*
Author: Priyansh Gupta
Date: Oct 16, 2023
Problem URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, temp = 0;
        vector<int> charIndex(128, -1);
        for (int index = 0; index < s.length(); index++) {
            temp = charIndex[s[index]] >= temp ? charIndex[s[index]] + 1 : temp;
            charIndex[s[index]] = index;
            maxLength = max(maxLength, index - temp + 1);
        }
        return maxLength;
    }
};
