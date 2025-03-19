#include <stdio.h>
int maxarr(int array[],int size){
    int max = INT_MIN;
    for (int i=0 ;i<size ;i++){
        max=max(max,array[i]);
    }
}
int minarr(int array[],int size){
    int min = INT_MAX;
    for (int i=0 ;i<size ;i++){
        min=min(min,array[i]);
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[1000];
    for (int i=0;i<size ;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",minarr(arr[],size));
    printf("%d",maxarr(arr[],size));
}