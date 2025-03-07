#include <stdio.h>
int main(){
    int n,i;
    scanf("%d %d",&n,&i);
    int mask=~(1<<i);
    n=n & mask;
    printf("%d",n);
}