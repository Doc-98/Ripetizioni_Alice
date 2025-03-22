//
// Created by dvinc on 3/8/2025.
//
#include<stdio.h>

int main() {

    int a[10] = {10, 41, 2, 6, 7, 16, 9, 235, 8, 9};

    //* Definiamo una variabile temporanea per effettuare gli scambi e un indice j
    int j, temp;

    //* Stampiamo il vettore iniziale, non ordinato
    for (int i = 0; i < 10; i++) {
        printf("%d \t", a[i]);
    }

    printf("\nordiniamo con insertion sort\n");

    //* Iniziamo un ciclo che scorre tutto il vettore
    for (int i = 1; i < 10; i++) {

        //* Salviamo il valore in posizione 'i'
        temp = a[i];

        //* Iniziamo un secondo ciclo che va da 'i - 1' verso l'inizio del vettore
        //* Il ciclo si ferma se arriviamo all'inizio del vettore o se troviamo un valore più piccolo di quello salvato in 'temp'
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            //* In questo modo spostiamo verso destra ogni valore che risulta più grande di 'temp'
            a[j + 1] = a[j];
        }
        //* Una volta usciti dal ciclo re-inseriamo il valore che avevamo salvato in 'temp' nel vettore
        a[j + 1] = temp;
    }

    //* Stampiamo il vettore ordinato
    for (int i = 0; i < 10; i++) {
        printf("%d \t", a[i]);
    }

    return 0;
}
