#include <stdio.h>
#include <math.h>
int main(){
    int d,ans,i=0;
    scanf("%d",&d);
    while (n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    printf("%d",ans);
}