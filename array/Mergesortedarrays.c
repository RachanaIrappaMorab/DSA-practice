/*Merge Sorted Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
 
 
 here they  mentioned that we do not create the separate array to return the result we should store the merged array in nums1 array oitself so inorder to do that 
  we have to compare the last elements of the each array  with each if nums1 elelment is greater that nums2 elelemnent then we have to store that at the at  the last*/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0&&j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;

        }
        else{
            nums1[k]=nums2[j];
            j--;
        }
        k--;

    }
    while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
    }
    
}
