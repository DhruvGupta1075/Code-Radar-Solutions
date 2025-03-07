#include <stdio.h>
int main(){
    int d,bin[32],i=0;
    scanf("%d",&d);
    if (d=0) printf("0/n");
    while(d>0){
        bin[i]=d%2;
        d-d/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d",bin[j]);
    }
}