char* removeDuplicates(char* s) {
  int n=strlen(s);
  char * stack=(char*)malloc(n*sizeof(char));
  int top=-1;
  for(int i=0;s[i]!='\0';i++){
    if(top!=-1&&stack[top]==s[i]){
        top--;
    }
    else{
        top++;
        stack[top]=s[i];
    }
  } 
  char * result=(char*)malloc((top+2)*sizeof(char));
 for(int i=0; i<=top; i++) {
     result[i] = stack[i];
 }
 result[top + 1] = '\0'; 
  free(stack); 
 return result;
}
