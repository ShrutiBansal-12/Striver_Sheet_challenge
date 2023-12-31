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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //list1 and list2 are two pointers to 1st and 2nd list respectively
        if(list1==NULL){   //list1 is empty
            return list2;
        }
        if(list2==NULL){    //list2 is empty
            return list1;
        }
        ListNode* ans=new ListNode;
        ListNode *ptr=ans;
        while(list1 && list2){
            if(list1->val<=list2->val){
                ptr->next=list1;
                ptr=list1;
                list1=list1->next;
            }
            else{
                ptr->next=list2;
                ptr=list2;
                list2=list2->next;
            }
        }
        if(list1){
            ptr->next=list1;
        }
        if(list2){
            ptr->next=list2;
        }
        return ans->next;
    }
};
