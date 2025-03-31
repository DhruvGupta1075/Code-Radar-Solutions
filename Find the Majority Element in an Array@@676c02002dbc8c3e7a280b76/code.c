#include <stdio.h>

int count(int arr[],int size){
    int c=1;
    for (int i=0;i<size;i++){
        if (arr[i]==arr[i+1]){
            c++;
        }
        else {
            return arr[i];
        }
        
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