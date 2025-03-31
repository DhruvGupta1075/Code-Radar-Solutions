#include <stdio.h>
int digitsum(int num){
    int sum=0,r;
    while(num!=0){
        r=r%num;
        sum+=r;
        num=num/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr[i]=digitsum(arr[i]);
    }
    for  (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}