/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



bool isPalindrome(struct ListNode* head) {
    int arr[100000];
    int n=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        arr[n]=temp->val;
        n++;
        temp=temp->next;
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}
