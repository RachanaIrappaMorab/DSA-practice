/*977. Squares of a Sorted Array
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

here i will  create a separate result array and  i will take the first two elements of the array and i will square them and i will compare their 
squares and based on which is greater i will store the  element and  i will increase or decrease the respected index if left i will increase the index  if it i
is right i will decrease the index value 
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left=0;
    int right=numsSize-1;
    int pos=numsSize-1;
    *returnSize=numsSize;
    int *resu=(int*)malloc(numsSize* sizeof(int));
    while(left<=right){
        if((nums[left]*nums[left])>(nums[right]*nums[right])){
            resu[pos]=nums[left]*nums[left];
            left++;
        }
        else{
            resu[pos]=nums[right]*nums[right];
            right--;
        }
        pos--;
    }
    return resu;
}
