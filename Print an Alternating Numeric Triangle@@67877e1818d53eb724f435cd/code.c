#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool t=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",t);
            t=!t;
        }
        printf("\n");
    }
}