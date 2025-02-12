#include <stdio.h>
int main(){
    int n;
    bool t;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<n-i;j++){
            printf("%b ",t);
            t++
        }
        printf("\n");
    }
}