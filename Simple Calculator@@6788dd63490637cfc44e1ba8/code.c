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
                break;
            }
            else printf("error");
        case '*':
            printf("%.0f",n1*n2);
            break;
        case '/':
            if (n1>n2){
                printf("%.0f",n1/n2);
                break;
            }
            else if(n1==0 || n2==0){
                printf("error");
            }
            else printf("erorr");
        default:
            printf("error");
    }
    return 0;
}