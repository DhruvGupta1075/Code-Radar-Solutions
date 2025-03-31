#include<stdio.h>
int duplicate(int arr[],int n){
    int sum=0,s2=0,element;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    for (int j=0;j<n;j++){
        s2+=j;
    }
    element=sum-s2;
    return element;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",duplicate(arr,n));
}