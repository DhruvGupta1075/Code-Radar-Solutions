#include <stdio.h>

int peak(int arr[],int size){
    for (int i=0;i<size;i++){
        if (size<=2){
            if (arr[i]<arr[i+1]) return arr[i+1];
        }
        if (arr[i]==arr[i+1]) return -1;
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return arr[i];
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