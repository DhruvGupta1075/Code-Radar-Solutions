void fibonacciSeries(int n){
    int a=0,b=1,c=0;
    while (n--){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}