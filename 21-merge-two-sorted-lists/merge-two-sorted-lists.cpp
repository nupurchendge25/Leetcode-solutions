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
        ListNode dummy;
        ListNode* ans = &dummy;
        dummy.next = nullptr;
        

        if(list1==NULL && list2==NULL){ return nullptr;}

        

        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                ans->next=list1;
                ans=ans->next;
                list1=list1->next;
            }
            else{
                ans->next=list2;
                ans=ans->next;
                list2=list2->next;
            }
        }
        if (list1 != nullptr) ans->next = list1;
        else ans->next = list2;
        return dummy.next;
    }
};