#include <stdio.h>
int main(){
    int n,i;
    scanf("%d %d",&n,&i);
    int mask=n>>i;
    int res=mask&n;
    printf("%d",res);
}