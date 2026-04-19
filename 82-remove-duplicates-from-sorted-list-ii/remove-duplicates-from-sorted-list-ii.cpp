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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;

        ListNode* dummy = new ListNode(0);
        ListNode* temp=dummy;

        ListNode* temp1=head;
        while(temp1!=NULL){
            if(temp1->next != NULL && temp1->val==temp1->next->val){
                
                while(temp1->next != NULL && temp1->val==temp1->next->val ){
                    temp1=temp1->next;
                }
                temp1=temp1->next;

            }
            else{
                temp->next=new ListNode(temp1->val);
                temp1=temp1->next;
                temp=temp->next;
            }
        }
        

        return dummy->next;
    }
};