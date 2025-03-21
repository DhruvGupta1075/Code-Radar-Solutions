#include <stdio.h>
#include <limits.h>

int getmax(int num[],int size){
    int max= INT_MIN;
    for (int i=0;i<size;i++){
        if (num[i]>max){
            max=num[i];
        }

    }
    printf("%d",max);
}

int getmin(int num[],int size){
    int min= INT_MAX;
    for (int i=0;i<size;i++){
        if (num[i]>min){
            min=num[i];
        }
    }
    printf("%d ",min);
}

int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i< n; i++){
        scanf("%d",&num[i]);
    }

getmin(num,n);
getmax(num,n);
}