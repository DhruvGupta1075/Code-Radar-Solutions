#include <stdio.h>

int count(int arr[],int size){
    int c=1,ans;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (arr[i]==arr[i+1]){
                c++;
            }
        }
        if (c>size/2){
            ans =arr[i];
        }
        
    }
    if (ans!=0) return ans;
    else return -1;
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