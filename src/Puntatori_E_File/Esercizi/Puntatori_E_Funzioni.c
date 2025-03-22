//
// Created by dvinc on 3/21/2025.
//

#include <stdio.h>

int valoreMax(int *vettore, int size) {

    int max = *vettore;

    for (int i = 1; i < size; i++) {
        if (*(vettore + i) > max) {
            max = *(vettore + i);
        }
    }
    return max;
}

int main() {

    int array[] = {16, 2, 3, 4, 1000, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%d\n", valoreMax(array, size));

    return 0;
}