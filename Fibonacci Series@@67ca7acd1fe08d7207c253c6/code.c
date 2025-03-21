void fibonacciSeries(num){
    int a=0,b=1,c;
    for (int i=2;i<num;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}