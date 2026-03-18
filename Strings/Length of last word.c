/* here my logic is i will start the loop from the end of the string before that i will ignore any space before the word 
 then i will run that loop untill  i found the next space so it tells that that wprd ends here  */
int lengthOfLastWord(char* s) {
    int count=0;
    int i=strlen(s)-1;
    while(i>=0&&s[i]==' '){
        i--;
    }
    while(i>=0&&s[i]!=' '){
        count++;
        i--;
    }
    return count;
    
}
