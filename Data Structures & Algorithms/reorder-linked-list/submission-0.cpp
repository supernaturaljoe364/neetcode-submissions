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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //when fast reaches end, slow reaches mid point

        //now reverse the linked list from slow->next to end
        ListNode* curr = slow->next;
        ListNode* prev = slow->next = NULL;
        ListNode* temp;

        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        //now prev points to the last element and traverses reverse style

        //now merge the two list like that prev problem
        ListNode* firstHalf = head;
        curr = prev;

        while(curr){
            ListNode* temp1 = firstHalf->next;
            ListNode* temp2 = curr->next;

            firstHalf->next = curr;
            curr->next = temp1;

            firstHalf = temp1;
            curr = temp2;
        }
    }
};
