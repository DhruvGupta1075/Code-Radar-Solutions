#include <stdio.h>
#include <limits.h>

void getsec(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int secmin=INT_MAX;
    for (int i=0;i<size;i++){
        if (arr[i]<secmin){
            if(min<INT_MAX){
            continue;
            }
            secmin=arr[i];
        }
    }
    if (secmin==INT_MAX){
        printf("-1");
    }
    printf("%d",secmin);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    getsec(arr,n);
}