/*
Author: Priyansh Gupta
Date: Oct 16, 2023
Problem URL: https://leetcode.com/problems/add-two-numbers/
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = ((l1 != nullptr) ? l1->val : 0) + ((l2 != nullptr) ? l2->val : 0) + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode* node = new ListNode(digit);
            tail->next = node;
            tail = tail->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode* result = head->next;
        delete head;
        return result;
    }
};
