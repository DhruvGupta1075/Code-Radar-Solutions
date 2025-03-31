#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],visit[1000];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (visit[i]) continue;
        int c=1;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                c++;
                visit[j]=1;
            }
        }
        printf("%d %d\n",arr[i],c);
    }
}