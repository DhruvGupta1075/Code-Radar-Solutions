#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool t=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<n-i;j++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}