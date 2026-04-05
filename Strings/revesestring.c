void reverseString(char* s, int sSize) {
    int i=0;
    int j=sSize-1;
    int temp;
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    
}
