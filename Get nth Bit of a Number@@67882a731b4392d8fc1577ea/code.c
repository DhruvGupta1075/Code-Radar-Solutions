#include<stdio.h>
int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int b=a>>n;
    int c=b&1;
    printf("%d",c);
}