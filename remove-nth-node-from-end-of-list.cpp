/**
https://leetcode.com/problems/remove-nth-node-from-end-of-list/ 
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)  return NULL;
 
        ListNode* pre = head;
        ListNode* nex = head;
        ListNode* temp = NULL;
        for(int i=1;i<=n;i++) nex = nex->next;
        if(!nex) return head->next;
        while(nex->next!=NULL){
            pre = pre->next;
            nex = nex->next;
        }
        
        pre->next = pre->next->next;
        return head;
    }
};