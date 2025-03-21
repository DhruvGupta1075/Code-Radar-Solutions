#include <stdio.h>

int main(){
    int n,t;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }
    scanf("%d",&t);
    for (int i=0;i<n;i++){
        if (t==arr[i]){
            printf("%d",i);
        }
        else {
            printf("-1");
        }
    }
}