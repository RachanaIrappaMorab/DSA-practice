bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){        
     if (matrixSize == 0 || matrixColSize[0] == 0)

    return false;

int m = matrixSize;
int n = matrixColSize[0]; 
 int row=0; 
 int col=n-1; 
  while(row<m&&col>=0){
     int val=matrix[row][col]; 
     if(val==target) 
      return true;
        else if(val>target){
            col=col-1;
            } 
            else{
                row=row+1;
                }
            } return false;    

}
