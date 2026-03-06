bool isPalindrome(char* s) {
    int left=0;
     int right=strlen(s)-1;
      while(left<right){
          while (left < right && !isalnum(s[left])) 
    left++;
 while (left < right && !isalnum(s[right])) 
    right--;
      char leftchar=s[left];
      char rightchar=s[right];
         if(tolower(leftchar)!=tolower(rightchar))  return false;   
             left++; 
right--; 

}
 return true;
 }
