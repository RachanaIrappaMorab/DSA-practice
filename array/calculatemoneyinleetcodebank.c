int totalMoney(int n) {
    int total=0;
    int start=1;
    int curr=1;
    for(int i=1;i<=n;i++){
        total=total+curr;
        curr++;
        if(i%7==0){
            start++;
            curr=start;
        }
      

    }
      return total;
    
}
