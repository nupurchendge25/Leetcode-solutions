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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int result=count-n+1;
        temp=head;
        if (result == 1) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        int s=1;
        while(s+1!=result){
            temp=temp->next;
            s++;
        }
         
        ListNode* current=temp->next;
        temp->next=temp->next->next;
        delete current;

        return head;
        
    }
};