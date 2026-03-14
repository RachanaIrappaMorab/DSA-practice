/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode*curr= head;
    struct ListNode* temp=NULL;
    while(curr!=NULL&&curr->next!=NULL){
        if(curr->val!=curr->next->val){
            curr=curr->next;
        }
        else{
            temp=curr->next;
            curr->next=curr->next->next;
            free(temp);
        }
    }
    return head;
}
