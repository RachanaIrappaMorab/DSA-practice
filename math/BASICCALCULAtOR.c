int calculate(char* s) {
   long long  result = 0;
      long long   curr = 0;
      long long   sign = 1;

    long long stack[2000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') continue;

        if(s[i] >= '0' && s[i] <= '9') {
            curr = curr* 10 + (s[i] - '0');
        }

        else if(s[i] == '+') {
            result = result + sign * curr;
            curr = 0;
            sign = 1;
        }

        else if(s[i] == '-') {
            result = result + sign * curr;
            curr = 0;
            sign = -1;
        }

        else if(s[i] == '(') {
            stack[++top] = result;
            stack[++top] = sign;

            result = 0;
            sign = 1;
        }

        else if(s[i] == ')') {
            result = result + sign * curr;
            curr = 0;

            result = result * stack[top--];
            result = result + stack[top--];
        }
    }

    result = result + sign * curr;

    return result;
}
