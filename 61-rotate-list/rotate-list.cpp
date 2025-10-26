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
        ListNode* temp=head;
        if (!head || !head->next || k == 0){
            return head;
        }
        int n=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            n++;
        }
        temp->next=head;
        k = k % n;
        int stepsToNewTail = n - k;
        ListNode* newTail = temp; // start from last node
        while (stepsToNewTail--) {
            newTail = newTail->next;
        }

        ListNode* newHead=newTail->next;
        newTail->next=nullptr;
        return newHead;
    }
};