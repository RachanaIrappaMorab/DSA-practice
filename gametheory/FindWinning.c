//#3222
char* winningPlayer(int x, int y) 
{
    int move ; 
  if(x<y/4) {move=x;} 
    else{ move=y/4;}
  if(move%2==1){
    return "Alice";
  }  else{
    return "Bob";
  }  
}
