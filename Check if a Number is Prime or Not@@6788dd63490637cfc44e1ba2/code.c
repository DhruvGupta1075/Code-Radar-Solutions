#include <stdio.h>

int main() {
    int a,ans;
    scanf("%d",&a);
    if (a==2) printf("Prime");
    else {
        for(int i=2;i<a;i++){
            if (a%i==0){
                ans=0;
                break;
            }
            else ans=1;
        }
        if (ans==1) printf("Prime");
        else printf("Not Prime");
    }
    return 0;
}