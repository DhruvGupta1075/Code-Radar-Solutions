#include <stdio.h>
int main(){
    int n,i;
    scanf("%d %d",&n,&i);
    int mask=~(i>>1);
    n=n & mask;
    printf("%d",n);
}