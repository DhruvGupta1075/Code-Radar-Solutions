#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool t=0;
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        for (int j=0;j<i;j++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}