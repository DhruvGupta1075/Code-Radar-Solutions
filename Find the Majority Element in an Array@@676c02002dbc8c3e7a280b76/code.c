#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans,majority=n/2;
    for (int i=0;i<n;i++){
        int c=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                c++;
            }
        }
        if (c>majority){
            ans = arr[i];
        }
        
    }
    if (ans!=0) printf("%d",ans);
    else printf("-1");
}