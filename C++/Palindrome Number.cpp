/*
Author: Priyansh Gupta
Date: Oct 19, 2023
Problem URL: https://leetcode.com/problems/palindrome-number/
*/

class Solution {
public:
    bool isPalindrome(int x) {
        string palindrome = to_string(x); int size = palindrome.length();
        for(int index = 0; index < size/2; index++){
            if(palindrome[index]==palindrome[size-1-index]) continue;
            else return false;
        }
        return true;
    }
};
