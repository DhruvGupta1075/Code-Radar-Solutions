#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for  (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans;
    for (int i=0;i<n;i++){
        int c=0;
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                c++;
            }
        }
        ans=c;
        printf("%d %d\n",arr[i],ans);
    }
}