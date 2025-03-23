//
// Created by dvinc on 3/23/2025.
//
#include <stdio.h>

int main() {

    FILE *file = fopen("prova.txt", "a");

    if (file == NULL) {
        // Cioè se la nostra variabile è nulla c'è stato un errore nell'apertura del file e il nostro puntatore è vuoto
        printf("impossibile aprire il file\n");
        return 1; // Chiudiamo il programma anticipatamente perchè c'è stato un errore
    }

    rewind(file);
    fprintf(file, "\nbella gente");
    fclose(file);

    // devo sempre chiudelo altrimenti qualunque riga di codice viene scritta dentro
    remove("prova.txt");
    // e sparisce dalla directiry ma devo togliere anche le righe da 3 ad 8 return 0;
}
