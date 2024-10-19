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
   ListNode* reverseBetween(ListNode* A, int B, int C) {
    // Edge case: if the list is empty or B equals C, return the list as is.
    if (A == NULL || A->next==NULL || B == C) return A;


    ListNode* curr=A;
    ListNode* prev = NULL;
    int i=1;
    // Move prev to the node just before position B.
     while (i < B) {
        prev = curr;
        curr = curr->next;
        i++;
    }

    ListNode* start = curr;
    ListNode* PointerToStart = prev;
prev=NULL;
    while(curr!=NULL && i<C+1){
        ListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        i++;     
    }
    start->next=curr;
    if(PointerToStart!=NULL){
        PointerToStart->next=prev;
    }else{
        return prev;
    }
    return A;
}

};