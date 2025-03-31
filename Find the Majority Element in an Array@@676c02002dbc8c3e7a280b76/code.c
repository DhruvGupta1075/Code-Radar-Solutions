#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=1,ans;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                c++;
            }
        }
        if (c>n/2){
            ans =arr[i];
        }
        
    }
    if (ans!=0) printf("%d",ans);
    else printf("-1");
}