bool isValid(char* s) {
 int n = strlen(s);   // calculating the length of the string         
    char* stack = (char*)malloc(n * sizeof(char));  // dynamic memory allocation 
    int top=-1; // initialization of the stack 
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){   // if the brackets are opening bracket then we have push that in to the stack 
            top++;
            stack[top]=s[i];
        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']'){  //checking whether it is closing brackte 
            if(top==-1)
            return false;
            if((stack[top]=='('&&s[i]==')')||(stack[top]=='{'&&s[i]=='}')||(stack[top]=='['&&s[i]==']'))   // checking whether they both are matcjing or not 
            { 
                top--;
            }
             else{
                 return false;
            }
        }
    }
    return top==-1;/* at the end of the string if all brackets got their pair then stack
  will be empty know thats why we are returning top=-1; at last*/
}
