/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;

    struct ListNode *curr = dummy;
    struct ListNode *temp;

    while(curr->next != NULL && curr->next->next != NULL){

        if(curr->next->val == curr->next->next->val){

            int dup = curr->next->val;

            while(curr->next != NULL && curr->next->val == dup){
                temp = curr->next;
                curr->next = curr->next->next;
                free(temp);
            }

        }
        else{
            curr = curr->next;
        }
    }

    return dummy->next;
}
