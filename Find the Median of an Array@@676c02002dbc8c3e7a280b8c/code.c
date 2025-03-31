#include <stdio.h>

int main(){
    int n,arr[100],median;
    scanf("%d",&n);
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (n/2!=0){
            median=arr[n/2];
        }
        else {
            median=(arr[n/2]+arr[n-1-(n/2)])/2;
        }
    }
    printf("%d",median);
}