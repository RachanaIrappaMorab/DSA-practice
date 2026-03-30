int singleNumber(int* nums, int numsSize) {
    int num=0;
    for(int i=0;i<numsSize;i++){
        num=num^nums[i];
    }
    return num;
    
}

// her i used xor property which has the time complexity O(n) and space complexity O(1)
