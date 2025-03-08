//
// Created by dvinc on 3/8/2025.
//
#include <stdio.h>

int main() {

    // ESEMPIO
    // 12 15 65 32 4 17 23 10 46 2

    //* Dichiariamo un array di grandezza arbitrariamente grande, una variabile per salvare la grandezza del vettore e una variabile temporanea
    int a[100], size, temp;

    //* Chiediamo all'utente di specificare quanti numeri vuole immettere nel vettore e poi quali
    printf("Quanti elementi nel vettore\n");
    scanf("%d", &size);
    printf("Introduci %d numeri \n", size);

    //* Qui prendiamo precisamente il quantitativo di numeri specificato
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    //* Stampiamo il vettore iniziale non ancora riordinato
    printf("Lista originale :\n");

    for (int i = 0; i < size; i++)
        printf("%5d", a[i]);

    //* Iniziamo a riordinare con il Bubble Sort partendo con un ciclo for per scorrere il vettore dal secondo elemento all'ultimo
    for (int i = 1; i < size; i++)
        //* Dopodiché iniziamo subito un secondo ciclo for per scorrere il vettore da 0 a 'size - i'
        //* Questo perché ogni volta che finiremo una iterazione del ciclo esterno, vorrà dire che un numero sarà stato portato in cima, al suo corretto posto
        //* Ergo, non abbiamo più bisogno di controllarlo e di conseguenza non c'è più bisogno che la 'j' arrivi fino in fondo al vettore
        for (int j = 0; j < size - i; j++)
            //* Qui specifichiamo quando effettuare lo scambio fra i due valori del vettore adiacenti
            //* Ovvero quando il valore contenuto in posizione 'j' è più grande di quello contenuto in posizione 'j + 1'
            if (a[j] >= a[j + 1]) {
                //* In questo capo dobbiamo fare il solito scambio della macchina parcheggiata
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    //* Qui semplicemente stampiamo il nostro array
    printf("\n\nlista ordinata :\n");

    for (int i = 0; i < size; i++)
        printf("%5d", a[i]);

    return 0;
}
