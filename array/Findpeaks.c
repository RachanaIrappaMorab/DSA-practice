
int* findPeaks(int* mountain, int mountainSize, int* returnSize) {
 int* result = (int*)malloc(mountainSize * sizeof(int));
int count = 0;
*returnSize = 0;      
  for(int i=1;i<=mountainSize-2;i++){
    if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1] )
    { result[count]=i; 
     count++; } 
  } 
  *returnSize = count;
  
return result;
} 
