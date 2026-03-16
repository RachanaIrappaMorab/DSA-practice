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



/*
in python also we can apply this which do not have any space complexity 
date 16/03/2026
*/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        while left < right:

            while left < right and not s[left].isalnum():
                left += 1

            while left < right and not s[right].isalnum():
                right -= 1

            if s[left].lower() != s[right].lower():
                return False

            left += 1
            right -= 1

        return True
