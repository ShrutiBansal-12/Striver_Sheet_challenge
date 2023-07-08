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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=head;
        ListNode *cur=head;
        ListNode *count=head;
        int c=1;
        while(count->next!=NULL){
            count=count->next;
            c++;
        }
        k=k%c;
        while(k!=0){
            while(cur->next!=NULL){
            cur=cur->next;
            }
            while(prev->next!=cur){
                prev=prev->next;
            }
            cur->next=head;
            prev->next=NULL;
            head=cur;
            prev=head;
            dummy->next=head;
            k--;
        }
        return dummy->next;
    }
};
