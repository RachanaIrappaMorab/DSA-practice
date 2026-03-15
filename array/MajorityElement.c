/* 169. Majority Element
Easy
Topics
premium lock icon
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



   here for this  i used Boyer moore voting algprithm   this technique returns the candidate element
 */


int majorityElement(int* nums, int numsSize) {
    int candi=0;
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(count==0){
            candi=nums[i];
        }
        if(candi=nums[i]){
            count++;
        }
        else{
            count--;

        }
    }
    return candi;
    
}
