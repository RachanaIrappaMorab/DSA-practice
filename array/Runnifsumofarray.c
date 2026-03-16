/* #1480
Running Sum of 1D array
we can solve this code in two ways that 1) we can create another array and we can store the values that and return that array  which will consume 
the space  2) we can overwrite the given array so that we can aoind consuming of large space  


1)
*/
int* runningSum(int* nums, int numsSize, int* returnSize) {
int * arr=(int*)malloc(numsSize*sizeof(int));
   *returnSize=numsSize;
  arr[0]=nums[0];
  for(int i=1;i<numsSize;i++){
    arr[i]=arr[i-1]+nums[i];
    }
    return arr;
}

//2)
int* runningSum(int* nums, int numsSize, int* returnSize) {

    *returnSize=numsSize;
   
    for(int i=1;i<numsSize;i++){
        nums[i]=nums[i-1]+nums[i];
    }
    return nums;
}
