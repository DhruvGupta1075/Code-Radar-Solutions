#include <stdio.h>
#include <ctype.h>
int main() {
    char chr;
    scanf("%c",&chr);
    if (isalpha(chr))
        char ch=tolower(chr);
        if (ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u') printf("Vowel");
        else printf("Consonant");
    else if (isdigit(chr)) printf("Digit");
    else printf("Special  Character");
    
    return 0;
}