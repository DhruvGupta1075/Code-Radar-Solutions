#include <stdio.h>

int MyPow(int a,int b){
      if(b<0)      
        return 1 / MyPow (a,-b)
      else if(b==0)
        return 1;
      else if(b==1)
        return a;
      else
        return a*MyPow(a,b-1)
    }
int main(){
    int d,ans,i=0;
    scanf("%d",&d);
    while (d!=0){
        int bit=d&1;
        ans=(bit*MyPow(10,i))+ans;
        i++;
        d=d>>1;
    }
    printf("%d",ans);
}