#include <stdio.h>

int main() {
    int a;
    for (int i=a;i>=1;i--){
        for (int j=1;j<=a;j++){
            if (j>=1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}