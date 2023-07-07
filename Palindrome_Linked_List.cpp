/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head==NULL){
            return true;
        }
        else{
            ListNode *slow=new ListNode;
            ListNode *fast=new ListNode;
            slow=fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=(fast->next)->next;
            }
            ListNode *prev=new ListNode;
            ListNode *curr=new ListNode;
            ListNode *nxt=new ListNode;
            prev=NULL; 
            curr=slow;
            nxt=head;
            while (curr){
                nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
            }
            ListNode *mid=new ListNode;
            ListNode *last=new ListNode;
            ListNode *current=new ListNode;
            mid=slow;
            last=prev;
            current=head;
            while(last){
                if (last->val!=current->val){
                    return false;
                }
                last=last->next;
                current=current->next;
            }
        }
        return true;
    }
};
