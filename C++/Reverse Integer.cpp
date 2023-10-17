/*
Author: Priyansh Gupta
Date: Oct 18, 2023
Problem URL: https://leetcode.com/problems/reverse-integer/
*/

class Solution {                      
public:
    int reverse(int x) {
        long result = 0;
        while(x){ result = result*10 + x%10; x/=10; }
        return (result > INT_MAX || result < INT_MIN) ? 0 : int(result);
    }
}; 
