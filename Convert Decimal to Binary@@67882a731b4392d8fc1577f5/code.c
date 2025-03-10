#include <stdio.h>
#include <math.h>
int main(){
    int d,ans,i=0;
    scanf("%d",&d);
    while (d!=0){
        int bit=d&1;
        ans=(bit*pow(10,i))+ans;
        i++;
        d=d>>1;
    }
    printf("%d",ans);
}