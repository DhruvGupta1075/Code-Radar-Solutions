#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool t;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        t=i%2;
        for (int j=1;j<=i;j++){
            printf("%d ",t);
            t=!t;
        }
        printf("\n");
    }
}