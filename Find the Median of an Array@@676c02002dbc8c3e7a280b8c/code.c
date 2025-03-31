#include <stdio.h>

int main(){
    int n,arr[100],ans,median;
    scanf("%d",&n);
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (n/2!=0){
            median=arr[n/2];
        }
        else {
            ans=arr[n/2]+arr[(n/2)+1];
            median=ans/2;
        }
    }
    printf("%d",median);
}