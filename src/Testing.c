//
// Created by dvinc on 3/23/2025.
//
#include <stdio.h>

int main(void)
{
    char str[128];

    printf("Enter a string: ");
    gets(str);

    printf("You entered: %s\n", str);

    return 0;
}