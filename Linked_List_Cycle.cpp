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
    bool hasCycle(ListNode *head) {
        if (head==NULL){
            return false;
        }
        else{
            ListNode *fast=new ListNode;   //fast
            ListNode *slow=new ListNode;   //slow
            fast=head;
            slow=head;
            while(fast!=NULL && fast->next!=NULL){
                fast=(fast->next)->next;
                slow=slow->next;
                if(fast==slow){
                    return true;
                }
            }
            return false;
        }
    }
};
