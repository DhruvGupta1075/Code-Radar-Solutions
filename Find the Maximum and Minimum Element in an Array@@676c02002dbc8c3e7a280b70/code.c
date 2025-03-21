#include <stdio.h>
#include <limits.h>

int getmax(num[100],size){
    int max= INT_MIN;
    for (int i=0;i<size;i++){
        if (num[i]>max){
            max=num[i];
        }
        printf("%d",max);
    }
}

int getmin(num[100],size){
    int min= INT_MAX;
    for (int i=0;i<size;i++){
        if (num[i]>min){
            min=num[i];
        }
        printf("%d ",min);
    }
}

int main(){
    int n,num[100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&num[i]);
    }

getmin(num[100],n);
getmax(num[100],n);
}