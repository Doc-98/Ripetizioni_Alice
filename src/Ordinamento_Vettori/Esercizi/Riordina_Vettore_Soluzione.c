//
// Created by dvinc on 3/15/2025.
//

// Scrivere un codice che riordini un vettore di interi passato tramite stdin
// Si segua il seguente schema:
// 1 - Richiede all'utente di inserire il numero di elementi contenuti nel vettore di interi
// 2 - Richiede all'utente di inserire gli interi contenuti nel vettore
// 3 - Si stampi il vettore inserito
// 4 - Si riordini il vettore con un algoritmo di ordinamento a scelta
// 5 - Si stampi il vettore ordinato

#include <stdio.h>

int main() {

    //* Dichiarare le variabili necessarie
    int arr[50], size, temp;

    //* Richiedo il numero di elementi del vettore e salvo il valore nella variabile size
    printf("Inserire il numero di elementi contenuti nel vettore:\n");
    scanf("%d", &size);

    //* Richiedo di inserire i numeri contenuti nel vettore e li ottengo e salvo tramite una scanf inserita in un ciclo for
    //* Il ciclo viene eseguito un numero di volte pari "size"
    //* Ovviamente uso la i come indice per salvare ogni volta il numero ottenuto in una posizione diversa
    printf("Inserire i numeri contenuti nel vettore:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    //* Stampo il vettore ottenuto separando i numeri in modo che siano facilmente leggibili
    printf("\nIl vettore inserito è il seguente:\n");
    for (int i = 0; i < size; i++) {
        printf("~ %d ", arr[i]);
    }
    printf("~\n");

    //* Uso il bubble sort per ordinare il vettore
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //* Stampo il vettore ordinato
    printf("\nIl vettore è stato ordinato:\n");
    for (int i = 0; i < size; i++) {
        printf("~ %d ", arr[i]);
    }
    printf("~\n");

    return 0;
}
