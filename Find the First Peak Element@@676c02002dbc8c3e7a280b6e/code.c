#include <stdio.h>

int peak(int arr[],int size){
    int max;
    for (int i=0;i<size;i++){
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return arr[i];
            break;
        }
        
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",peak(arr,n));
}