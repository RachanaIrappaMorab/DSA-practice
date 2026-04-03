//using memoization technique 
//using top down approach

int dp[10000];
int solve(int n){
 
 
  if(n==0||n==1){
    return n;
  }
  if(dp[n]!=-1){
    return dp[n];
  }  
  dp[n]=solve(n-1)+solve(n-2);
  return dp[n];

}
int fib(int n) {
    for(int i = 0; i <= n; i++){
        dp[i] = -1;
    }

    return solve(n);
}
