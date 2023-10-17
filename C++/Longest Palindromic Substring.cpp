/*
Author: Priyansh Gupta
Date: Oct 17, 2023
Problem URL: https://leetcode.com/problems/longest-palindromic-substring/
*/

class Solution {
private: 
    bool IsPalindromic(string &palindromic, int start, int end){
        while(start<end){
            if(palindromic[start] != palindromic[end]) return false; start++; end--;
        }
        return true;
    }            
public:
    string longestPalindrome(string s) {
        int size = s.size(), start = 0, length = 0;
        for(int index = 0; index < size; index++){
            for(int item = index; item < size; item++){
                if(IsPalindromic(s, index, item)){
                    if(item-index+1 > length){
                        length = item-index+1;
                        start = index;
                    }
                }
            }
        }
        return s.substr(start, length);
    }
}; 
