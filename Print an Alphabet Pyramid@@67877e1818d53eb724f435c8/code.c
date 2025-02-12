#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (char a='A';a<'A'+i;a++){
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}