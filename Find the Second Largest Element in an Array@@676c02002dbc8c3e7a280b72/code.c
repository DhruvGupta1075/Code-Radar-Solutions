#include <stdio.h>
#include <limits.h>

int getsec(int arr[],int size){
    int max=INT_MIN;
    for (int i=0;i<size ;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    int secmax=INT_MIN;
    for (int i=0;i<size ;i++){
        if (arr[i]>secmax){
            if (arr[i]==max){
                continue;
            }
            secmax=arr[i];
        }
    }
    if (secmax==INT_MIN){
        return -1;
    }
    return secmax;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",getsec(arr,n));
}