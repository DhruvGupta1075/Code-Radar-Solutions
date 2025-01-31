#include <stdio.h>
int main() {
    float n1,n2;
    char ch;
    scanf("%f %f %c",&n1,&n2,&ch);
    switch (ch){
        case '+':
            printf("%.0f",n1+n2);
            break;
        case '-':
            if (n1>n2){
                printf("%.0f",n1-n2);
            }
            else printf("error");
            break;
        case '*':
            printf("%.0f",n1*n2);
            break;
        case '/':
            if(n1==0 || n2==0){
                printf("error");
            }
            else printf("%0.f",n1/n2);
            break;
        default:
            printf("error");
    }
    return 0;
}