//
// Created by dvinc on 3/8/2025.
//
#include <stdio.h>

int main() {

    // ESEMPIO
    // 12 15 65 32 4 17 23 10 46 2

    int a[100], size, temp;

    printf("quanti elementi nel vettore\n");
    scanf("%d", &size);
    printf("introduci %d numeri \n", size);

    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Lista originale :\n");

    for (int i = 0; i < size; i++)
        printf("%5d", a[i]);

    for (int i = 1; i < size; i++)
        for (int j = 0; j < size - i; j++)
            if (a[j] >= a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    printf("\n\nlista ordinata :\n");

    for (int i = 0; i < size; i++)
        printf("%5d", a[i]);

    return 0;
}
