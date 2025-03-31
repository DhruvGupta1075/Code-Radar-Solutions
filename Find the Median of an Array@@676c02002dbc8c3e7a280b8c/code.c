#include <stdio.h>

int main(){
    int n,arr[100],ans,median;
    scanf("%d",&n);
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mid=n/2;
    for (int i=0;i<n;i++){
        if (n%2!=0){
            median=arr[mid];
        }
        else {
            ans=arr[mid-1]+arr[mid];
            median=ans/2;
        }
    }
    printf("%d",median);
}