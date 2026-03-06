int removeDuplicates(int* nums, int numSize) {
    if(numSize==0)
    return 0;
    int uni=0;
    for(int i=1;i<numSize;i++){
        if(nums[i]!=nums[uni]){
            uni++;
            nums[uni]=nums[i];
        }
    }
    return uni+1; // returns the count 
}
