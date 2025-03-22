//
// Created by dvinc on 3/8/2025.
//
#include<stdio.h>

int main() {

    int arr[10] = {5, 8, 0, 1, 4, 2, 6, 3, 9, 7};

    //* Definiamo una variabile per memorizzare l'indice del valore minimo ad ogni ciclo e una variabile temporanea per effettuare gli scambi
    int minIndex, temp;

    //* Primo ciclo che scorre tutto il vettore
    for (int i = 0; i < sizeof(arr)/4; i++) {

        //* All'inizio del ciclo poniamo i due indici allo stesso punto
        minIndex = i;

        //* Secondo ciclo, con questo scorriamo il sotto-vettore che parte dalla posizione 'i' attuale e arriva fino alla fine del vettore
        for (int j = i + 1; j < 10; j++)
            //* Se il numero in posizione 'j' è minore del nostro attuale minimo
            if (arr[j] < arr[minIndex])
                //* Aggiorniamo il minimo salvando il nuovo indice
                minIndex = j;

        //* Arrivati qui avremo in 'minIndex' l'indice del numero più piccolo del sotto-vettore
        //* Salviamo questo numero in 'temp'
        temp = arr[minIndex];

        //* Spostiamo il numero che era in posizione 'i' dove era il minimo
        arr[minIndex] = arr[i];
        //* E spostiamo il minimo on posizione 'i'
        arr[i] = temp;

        //* Abbiamo invertito i due valori

        //* Potremmo stampare tutto dopo aver finito, ma già che siamo qui e che questo numero non verrà più spostato, possiamo approfittare
        printf("%2d", arr[i]);
    }
    return 0;
}
