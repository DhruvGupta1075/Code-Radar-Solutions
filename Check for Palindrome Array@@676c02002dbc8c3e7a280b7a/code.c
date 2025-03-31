#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
            if (arr[i]==arr[n-1-i]){
                count++;
            }
    }
    if (count==n) printf("YES");
    else printf("NO");
}