//
// Created by dvinc on 3/17/2025.
//
#include <stdio.h>

int prova() {
    int num, j, i, temp;
    int k, size;

    printf("numeri elementi:\n");
    scanf("%d", &size);

    int vettore[size];

    for (i = 0; i < size; i++) {
        printf("inserisci valore:\n");
        scanf("%d", &num);
        vettore[i] = num;
    }

    for (i = 0; i < size; i++) { printf("%d ", vettore[i]); }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i; j++); //! Qui c'è stata un po' di confusione di parentsi e ci siamo persi questo for
        if (vettore[j] > vettore[j + 1]) { //! Il for precedente va a vuoto e questo if è fuori
            {
                temp = vettore[j];
                vettore[j] = vettore[j + 1];
                vettore[j + 1] = temp;
            }
        }
        for (i = 0; i < size; i++) { printf(" %d", vettore[i]); } //! La stampa del vettore è ancora dentro il ciclo for che usa la i
    }//! Andava messo dopo questa graffa
    return 0;
}


int main() {

    int num, j, i, temp, size;

    printf("numeri elementi: ");
    scanf("%d", &size);
    int vettore[size];

    printf("inserisci valori: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num);
        vettore[i] = num;
    }

    printf("\n");
    for (i = 0; i < size; i++) printf("%d ", vettore[i]);
    printf("\n");

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i; j++) {
            if (vettore[j] > vettore[j + 1]) {
                temp = vettore[j];
                vettore[j] = vettore[j + 1];
                vettore[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < size; i++) { printf(" %d", vettore[i]); }
    return 0;
}
