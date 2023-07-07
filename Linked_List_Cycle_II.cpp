/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=new ListNode;   //fast
        ListNode *slow=new ListNode;   //slow
        ListNode *pos=new ListNode;
        fast=head;
        pos=head;
        slow=head;    
        while(fast!=NULL && fast->next!=NULL){
            fast=(fast->next)->next;
            slow=slow->next;
            if(fast==slow){
                while(pos!=fast){
                    pos=pos->next;
                    fast=fast->next;
                }
                return pos;
            }
        }
        return NULL;
    }
};
