#include <stdio.h>
int main(){
    int n,num,arr[100],count;
    scanf("%d %d",&n,&num);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==num) count++;
        else continue;
    }
    printf("%d",count);
}