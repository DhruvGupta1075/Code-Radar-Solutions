#include <stdio.h>
#include <limits.h>
int maxarr(int array[],int size){
    int maxi = INT_MIN;
    for (int i=0 ;i<size ;i++){
        if (array[i]>maxi){
            maxi=array[i];
        }
    }
    return maxi;
}
int minarr(int array[],int size){
    int mini = INT_MAX;
    for (int i=0 ;i<size ;i++){
        if (array[i]<mini){
            mini=array[i];
        }
    }
    return min;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[1000];
    for (int i=0;i<size ;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",minarr(arr[1000],size));
    printf("%d",maxarr(arr[1000],size));
}