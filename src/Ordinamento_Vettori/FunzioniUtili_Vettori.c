//
// Created by dvinc on 3/9/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//* Funzione che riceve un array di interi e la sua lunghezza come parametri e stampa il vettore su stdio
void printIntArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n\n");
}

//* Funzione per scambiare la posizione di due elementi di un vettore di interi, riceve come parametri i due puntatori ai valori da scambiare
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


//* Rivediamo il Bubble Sort usando la funzione swap
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

//* Rivediamo il Selection Sort usando la funzione swap
void selectionSort(int arr[], int size) {
    int minIndex;
    for (int i = 0; i < size; i++) {
        minIndex = i;
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

//* L'Insertion Sort non ha bisogno di usare la nostra funzione swap perchè scambia con una logica diversa
//* Rivediamo comunque questo algoritmo come funzione a se stante e in maniera più compatta
void insertionSort(int arr[], int size) {
    int temp, j;
    for (int i = 0; i < size; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

//* Questa funzione inverte l'ordine degli elementi di un vettore di interi, riceve come parametri il vettore da invertire e la sua grandezza
void arrayInverter(int arr[], int size) {
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

//* Questa funzione sovrascrive qualsiasi vettore di interi che viene passato come parametro, inserendo nuovi numeri casuali che vanno da 1 a 100
void populateRandomArray(int arr[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

void stringInverter(char arr[], int size) {
    char temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {

    char str[] = "Hello World!";
    int size = sizeof(str) / sizeof(str[0]) - 1;

    printf("%s\n", str);


    /* int temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }*/

    char temp;
    for (int i = 0; i < size/2; i++) {
        temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }


    printf("%s\n", str);

    return 0;
}



// int main() {
//
//     int arr[] = {7, 2, 10, 6, 8, 3, 9, 5, 1, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//
//     printf("Vettore iniziale: ");
//     printIntArray(arr, size);
//
//     populateRandomArray(arr, size);
//     printf("Vettore randomizzato: ");
//     printIntArray(arr, size);
//
//     bubbleSort(arr, size);
//     printf("Vettore ordinato: ");
//     printIntArray(arr, size);
//
//     arrayInverter(arr, size);
//     printf("Vettore invertito: ");
//     printIntArray(arr, size);
//
//     return 0;
//
// }