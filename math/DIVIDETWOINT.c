//DIVIDE TWO INTEGERS



int divide(int dividend, int divisor) {
    if(dividend==INT_MIN&&divisor==-1)
    return INT_MAX;
    int sign=1;
    if((dividend<0&&divisor>0)||(dividend>0&&divisor<0))
   sign=-1;
   
    long long a=dividend;
    long long b=divisor;
    if(a<0)
    a=-a;
    if(b<0)
    b=-b;
    long long result=0;
    while(a>=b){
        long long temp=b;
        long long multiple=1;
        while((temp<<1)<=a){
            temp=temp<<1;
            multiple=multiple<<1;

        }
        a=a-temp;
        result=result+multiple;

    }
    if(sign==-1)
    result=-result;
    return(int)result;
    }
