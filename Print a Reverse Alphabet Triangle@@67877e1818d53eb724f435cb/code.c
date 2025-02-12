#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){
            for (char ch='A';ch<'A'+i;ch++){
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
}