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
        ListNode start(0);
        ListNode* merge = &start;

        while(list1 && list2){
            if(list1->val < list2->val){
                //list1->val comes first
                merge->next = list1;
                list1 = list1->next;
            }
            else{
                //list2->val comes first
                merge->next = list2;
                list2 = list2->next;
            }
            merge = merge->next;
        }

        //no need for while here since the remaining of either list is just a pointer. just add to it
        if(list1) 
            merge->next = list1;
        else
            merge->next = list2;

        return start.next;
    }
};
