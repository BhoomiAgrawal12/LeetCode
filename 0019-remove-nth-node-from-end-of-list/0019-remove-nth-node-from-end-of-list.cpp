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
    ListNode* removeNthFromEnd(ListNode* A, int B) {
        if(!A || (A->next==NULL && B==1))return NULL;
    ListNode* fast=A;
    int cnt=0;
    while(fast!=NULL){
        fast=fast->next;
        cnt++;
    }
        ListNode* prev=new ListNode(-1);
        prev->next=A;
    fast=A;
    int begin=cnt-B;
        if(begin==0){
ListNode* toDelete=A;
            A=A->next;
            delete toDelete;
            return A;
        }
    for(int i=1;i<begin;i++){
        fast=fast->next;
    }
        ListNode* toDelete=fast->next;
        fast->next=toDelete->next;
        delete toDelete;
        
    return A;
    

    }
};