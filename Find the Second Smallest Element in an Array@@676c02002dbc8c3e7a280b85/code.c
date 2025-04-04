#include <stdio.h>
#include <limits.h>

int getsec(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int secmin=INT_MAX;
    for (int i=0;i<size;i++){
        if (arr[i]<secmin){
            if(arr[i]==min){
                continue;
            }
            secmin=arr[i];
        }
    }
    if (secmin==INT_MAX){
        return -1;
    }
    return secmin;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",getsec(arr,n));
}