//using bottom up approach
int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int A[n + 1];

    A[0] = 0;
    A[1] = 1;

    for(int i = 2; i <= n; i++){
        A[i] = A[i - 1] + A[i - 2];
    }

    return A[n];
}
