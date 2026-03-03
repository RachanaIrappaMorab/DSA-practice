//#3227
bool doesAliceWin(char* s) {
    int count=0; 
  for (int i = 0; s[i] != '\0'; i++)
  { 
    if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u') count++;
  }  
  if(count==0) {
    return false;
               }
  return true;  
}
