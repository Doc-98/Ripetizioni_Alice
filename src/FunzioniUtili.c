//
// Created by dvinc on 3/9/2025.
//
#include <stdio.h>

//* Funzione che riceve un array di interi e la sua lunghezza come parametri e stampa il vettore su stdio
void printIntArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", a[i]);
    }
}

//* Funzione per scambiare la posizione di due elementi di un vettore di interi, riceve come parametri i due puntatori ai valori da scambiare
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


//* Rivediamo il Bubble Sort usando la funzione swap
void bubbleSort(int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

//* Rivediamo il Selection Sort usando la funzione swap
void selectionSort(int a[], int size) {
    int minIndex;
    for (int i = 0; i < size; i++) {
        minIndex = i;
        for (int j = 0; j < size - 1; j++) {
            if (a[j] < a[j + 1]) {
                minIndex = j;
            }
        }
        swap(&a[minIndex], &a[i]);
    }
}

//* L'Insertion Sort non ha bisogno di usare la nostra funzione swap perchè scambia con una logica diversa
//* Rivediamo comunque questo algoritmo come funzione a se stante e in maniera più compatta
void insertionSort(int a[], int size) {
    int temp, j;
    for (int i = 0; i < size; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

int main() {
    printf("Hello World!");
    return 0;
}