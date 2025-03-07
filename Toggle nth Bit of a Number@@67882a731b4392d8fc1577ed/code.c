#include <stdio.h>
int main(){
    int n,i;
    scanf("%d %d",&n,&i);
    int mask=1<<n;
    int res=n^mask;
    printf("%d",res);
}