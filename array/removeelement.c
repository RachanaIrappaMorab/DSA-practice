int removeElement(int* nums, int numsSize, int val) {
    int caunt=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[caunt]=nums[i];
            caunt++;
        }
    }
    return caunt;
    
}
