//
// Created by dvinc on 3/22/2025.
//


#include <stdio.h>

int main() {

    char str[] = "puntatori";
    int num1 = 5, num2;
    int *puntI;
    char *puntC;

    // ~~ PARTE 1 ~~
    printf("%d\n", num1);       // 1
    printf("%p\n", &num1);      // 2
    printf("%p\n", puntC);      // 3
    printf("%p\n", &puntI);     // 4

    printf("%c\n", str[2]);     // 5
    printf("%s\n", str + 5);    // 6
    printf("%d\n", *str);       // 7

    // 8
    if(&num1 == &num2) printf("Uguali\n");
    else printf("Diversi\n");

    // ~~ PARTE 2 ~~
    num1 = 5;
    num2 = 10;
    puntI = &num2;
    puntC = &str[num1];

    printf("%d\n", num1);      // 9
    printf("%d\n", num2);      // 10
    printf("%p\n", puntI);     // 11
    printf("%d\n", *puntI);    // 12
    printf("%c\n", *puntC);    // 13
    printf("%s\n", str);       // 14
    printf("%s\n", puntC);     // 15

    // 16
    if(puntI == &num1) printf("Uguali\n");
    else printf("Diversi\n");

    // 17
    if(*puntI == num2) printf("Uguali\n");
    else printf("Diversi\n");

    // 18
    if(puntI == &num2) printf("Uguali\n");
    else printf("Diversi\n");

    // 19
    if(*puntC == str[3]) printf("Uguali\n");
    else printf("Diversi\n");

    return 0;
}
