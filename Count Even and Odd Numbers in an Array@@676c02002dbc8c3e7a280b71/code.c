#include <stdio.h>
int main(){
    int n,arr[100],even=0,odd=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0) even++;
        else odd++;
    }
    printf("%d ",even);
    printf("%d",odd);
    
}