#include <stdio.h>
#include <limits.h>

int even(int arr[],int size){
    int max=INT_MIN;
    for (int i=0;i<size;i++){
        if(arr[i]%2==0){
            if (max<arr[i]){
                max=arr[i];
            }
        }

    } 
    if (max==INT_MIN) return -1;
    else  return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",even(arr,n));
}