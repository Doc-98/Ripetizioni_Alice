//
// Created by dvinc on 3/14/2025.
//

#include <stdio.h>

int main() {

    // Variabile intera standard
    int num = 1;

    // Puntatori nei quali salviamo l'indirizzo della variabile "num"
    int* punt1 = &num;
    int* punt2 = &num;

    // Così stampiamo il numero num, niente di nuovo rispetto al solito
    printf("Numero: %d\n", num);

    // Così stampiamo l'indirizzo della variabile num, anche qui, niente di nuovo
    printf("Indirizzo numero: %p\n", &num);

    // Così stampiamo il valore salvato nella variabile punt1
    // Ma la variabile punt1 è un puntatore e abbiamo detto che ci abbiamo salvato dentro l'indirizzo di num
    // Quindi stiamo stampando di nuovo l'indirizzo di memoria di num
    // Per dirla diversamente, in questo punto del codice scrivere "punt1" oppure scrivere "&num" è la stessa cosa
    printf("Indirizzo salvato nel puntatore: %p\n", punt1);

    // Così stampiamo il valore che si trova all'indirizzo di memoria salvato in punt1
    // Ma abbiamo detto che l'indirizzo di memoria salvato in punt1 è l'indirizzo di num
    // Quindi questa cosa è come stampare num
    // Per dirla diversamente, in questo punto del codice, scrivere "*punt1" oppure scrivere "num" è la stessa cosa
    // In gergo più tecnico si dice che "punt1 PUNTA A num"
    printf("Valore puntato dal puntatore: %d\n", *punt1);

    // Così stampiamo l'indirizzo di memoria in cui è salvata la variabile "punt1"
    // Allo stesso modo di come abbiamo fatto prima con num
    // Questo perchè i puntatori, anche se hanno una funzione particolare, sono comunque delle variabili
    // Essere variabili vuol dire essere un contenitore di informazioni che vengono salvate ad un certo indirizzo di memoria
    printf("Indirizzo del puntatore: %p\n", &punt1);

    // In sintesi, prima di studiare in puntatori conoscevamo l'utilizzo dell'operatore "&", che messa davanti una variabile ci permette di accedere al suo indirizzo
    // Ora conosciamo anche l'utilizzo dell'operatore "*", che messo davanti una variabile ha la funzione opposta
    // Ovvero ci riporta quello che è contenuto all'indirizzo di memoria che è contenuto nella variabile in questione

    // Tramite l'utilizzo dei puntatori possiamo cambiare quello che è contenuto negli indirizzi di memoria che abbiamo
    // Qui per esempio cambiamo il valore che si trova all'indirizzo di memoria contenuto in punt1
    *punt1 = 100;

    // Ma siccome abbiamo che punt1 e punt2 puntano entrambi allo stesso indirizzo, se proviamo a stampare il valore puntato da entrambe, continuerà ad essere uguale
    // Questo anche se non abbiamo toccato direttamente punt2
    printf("Valore puntato da punt1: %d\n", *punt1);
    printf("Valore puntato da punt2: %d\n", *punt2);

    // E siccome punt1 e punt2 puntano all'indirizzo di memoria di num, stampare num avrà lo stesso risultato, poiché è sempre quella la memoria che andiamo a leggere
    printf("Valore di num: %d\n", num);

    // Infine possiamo rivedere un po' il concetto di vettore, infatti scopriamo che un vettore non è altro che un puntatore al primo elemento di se stesso
    int arr[] = {0, 7, 8, 9, 10};

    // Se prendiamo un puntatore del corretto tipo e lo uguagliamo ad un vettore, senza mettere le quadre, il compilatore non ci dá errori
    // Questo perchè anche la variabile "arr" è un puntatore e dunque l'assegnamento che stiamo facendo è corretto
    punt1 = arr;

    // Se ora stampiamo il valore puntato da punt1, ma sommando ad esso un valore intero, prima di applicare l'operatore *, possiamo decidere quale elemento del vettore selezionare

    // In pratica le due seguenti righe di codice fanno la stessa cosa, ovvero stampare il terzo elemento del vettore
    printf("\n ~ %d ~ \n", *(punt1 + 2));
    printf("\n ~ %d ~ \n", arr[2]);

    return 0;
}
