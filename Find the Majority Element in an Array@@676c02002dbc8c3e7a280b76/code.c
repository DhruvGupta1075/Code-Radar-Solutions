#include <stdio.h>

int count(int arr[],int size){
    int c=1;
    for (int i=0;i<size;i++){
        if (arr[i]==arr[i+1]){
            c++;
        }
        if (c>=(size/2)) {
            return arr[i];
        }
        if (c==size/2) return -1;
    }
    return -1;
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",count(arr,n));
}