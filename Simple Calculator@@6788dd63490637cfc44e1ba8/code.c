#include <stdio.h>
int main() {
    int n1,n2;
    char ch;
    scanf("%d %d %c",&n1,&n2,&ch);
    switch (ch){
        case '+':
            printf("%d",n1+n2);
            break;
        case '-':
            if (n1>n2){
                printf("%d",n1-n2);
                break;
            }
            else printf("error");
        case '*':
            printf("%d",n1*n2);
            break;
        case '/':
            if (n1>n2){
                printf("%d",n1/n2);
                break;
            }
            else printf("erorr");
        default:
            printf("error");
    }
    return 0;
}