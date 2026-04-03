char findTheDifference(char* s, char* t) {
    int count[26]={0};
    //counting the each alphabet
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    //deleteing the alphabe cout
     for(int i=0;t[i]!='\0';i++){
        count[t[i]-'a']--;
    }
    for(int  i=0;i<26;i++){
        if(count[i]!=0){
            return i+'a';
        }
    }
    return '\0';
    
}
