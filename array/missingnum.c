/* sum of the num from 0 to n 
//total=n*(n+1)/2
//sum of theall elements in an array 
//missing number=total-sum*/

int missingNumber(int* nums, int numsSize) {
    int p=numsSize;
      int tot=p*(p+1)/2;
       int sum=0; 
       for(int i=0;i<numsSize;i++){
         sum=sum+nums[i];}  
         int miss=tot-sum;
           return miss; 
} 
