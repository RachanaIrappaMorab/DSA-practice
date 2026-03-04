/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=NULL;
    struct ListNode* current=dummy;
    int carry=0;
    while(l1!=0||l2!=0||carry!=0){
        int value1=0;
        int value2=0;
        if(l1!=NULL){
            value1=l1->val;
        }
        if(l2!=NULL){
            value2=l2->val;
        }
        int sum=value1+value2+carry;
        carry=sum/10;
        struct ListNode*newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val=sum%10;
        newNode->next=NULL;
        current->next=newNode;
        current=newNode;
        if(l1!=NULL){
            l1=l1->next;
        }
         if(l2!=NULL){
            l2=l2->next;
        }
     

    }
       return dummy->next;
}
