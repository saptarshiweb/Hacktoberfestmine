//https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* add(ListNode* l1, ListNode* l2, int carry) {
        int digit1, digit2, sum;
        if (l1==nullptr && l2==nullptr) 
            return carry ? new ListNode(1) : nullptr; 
        digit1 = l1 ? l1->val : 0;
        digit2 = l2 ? l2->val : 0;

        sum = digit1 + digit2 + carry;
        return new ListNode(sum%10, add(l1?l1->next:l1, l2?l2->next:l2, sum/10));
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        return add(l1, l2, 0);
    }
};