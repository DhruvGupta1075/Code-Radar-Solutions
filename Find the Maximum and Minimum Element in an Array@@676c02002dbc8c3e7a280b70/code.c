#include <stdio.h>
#include <limits.h>
int maxarr(int array[],int size){
    int maxi = INT_MIN;
    for (int i=0 ;i<size ;i++){
        maxi =max(maxi,array[i]);
    }
}
int minarr(int array[],int size){
    int mini = INT_MAX;
    for (int i=0 ;i<size ;i++){
        mini=min(mini,array[i]);
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