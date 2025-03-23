
/* Il programma ti chiederà di inserire del testo. Dopo aver inserito il testo,
lo scriverà nel file "esempio.txt" e poi leggerà e stamperà il contenuto
del file sullo schermo. */

/*
 * Scrivere un programma che inizia chiedendo all'utente di inserire un testo.
 * Dopo aver memorizzato il testo inserito, il programma lo scriverà in un file di nome "esempio.txt".
 * Infine il programma deve aprire il file appena creato, leggerne il contenuto e stamparlo a schermo.
 */

#include <stdio.h>
#define MAX_STRING 100

int main() {

    FILE *file;
    char str[MAX_STRING];

    // Scrittura nel file
    file = fopen("esempio.txt", "w"); // "w" apre il file in modalità scrittura

    // Solita verifica che l'apertura del file sia andata a buon fine.
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    printf("Inserisci del testo da scrivere nel file:\n");
    // fgets hanno 3 parametri
    // 1 - La stringa nella quale vogliamo salvare ciò che leggiamo.
    // 2 - Un valore massimo di caratteri da leggere, di solito corrisponde alla grandezza massima della stringa nella quale salviamo.
    // 3 - Il file dal quale vogliamo leggere.
    fgets(str, MAX_STRING, stdin); // Legge una riga di testo dall'input

    //stdin legge i caratteri inseriti da tastiera

    fprintf(file, "%s", str); // Scrive il testo nel file
    fclose(file); // Chiude il file

    printf("Testo scritto nel file con successo.\n");

    // Lettura dal file
    file = fopen("esempio.txt", "r"); // "r" apre il file in modalità lettura

    // Solita verifica che l'apertura del file sia andata a buon fine.
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    printf("\nContenuto del file:\n");
    while (fgets(str, MAX_STRING, file) != NULL) {
        // Legge righe dal file fino alla fine
        printf("%s", str); // Stampa il testo letto
    }

    fclose(file); // Chiude il file
    return 0;
}