//
// Created by dvinc on 3/11/2025.
//

#include <stdio.h>

int main() {

    int vettore[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(vettore) / sizeof(vettore[0]), temp;

    for (int i = 0; i < size/2; i++) {
        temp = vettore[i];
        vettore[i] = vettore[size-i-1];
        vettore[size-i-1] = temp;
    }

    for (int i = 0; i < size; i++) {
        printf("%d\t", vettore[i]);
    }

    return 0;
}