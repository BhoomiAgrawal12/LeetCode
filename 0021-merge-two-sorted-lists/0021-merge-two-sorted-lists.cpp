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
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* dummy = new ListNode(-1); // Dummy node to start the merged list
        ListNode* temp = dummy; // Pointer to build the merged list
        
        // Iterate while either l1 or l2 is not null
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next; // Move the temp pointer forward
        }
        
        // Attach the remaining elements
        if (l1 != nullptr) temp->next = l1;
        else temp->next = l2;
        
        return dummy->next; // Return the merged list (dummy->next is the start)
    }
   
};