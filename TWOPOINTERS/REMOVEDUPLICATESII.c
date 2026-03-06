int removeDuplicates(int* nums, int numSize) { 

    if (numSize <= 2)
     return numSize; 
     int wrote=2;
       for(int i=2;i<numSize;i++)
       {
        if( nums[i]>nums[wrote-2])
          {
            nums[wrote]=nums[i];
            wrote++;
              } 
               
                 }   return wrote;
                  }  
