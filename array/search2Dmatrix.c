bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || matrixColSize[0] == 0)
    return false;

int m = matrixSize;
int n = matrixColSize[0]; 
 int total=m*n; 
  int start=0;
   int end=total-1;  
   while(start<=end){
      int  mid=(end-start)/2+start; 
      int row=mid/n; 
      int column=mid%n; 
      int val=matrix[row][column];
       if(val==target)
        return true; 
        else if(val>target){ 
            end=mid-1;} 
            else{start=mid+1;
            }
             } 
               return false;      
}  
