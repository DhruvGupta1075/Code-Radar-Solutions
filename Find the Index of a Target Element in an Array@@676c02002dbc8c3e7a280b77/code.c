#include <stdio.h>

int main(){
    int n,t,ans;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for (int i=0;i<n;i++){
        if (t==arr[i]){
            ans=i;
            break;
        }
        else {
            printf("-1");
        }
    }
    printf("%d",ans);
}