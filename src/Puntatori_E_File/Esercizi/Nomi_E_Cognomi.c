//
// Created by dvinc on 3/24/2025.
//

#define LEN_NAME_MAX 30

#include <stdio.h>

int originale() {

    FILE *file;
    int num, i;
    char nome[4];

    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ERRORE NELLA APERTURA DEL FILE");
        return 1;
    }

    printf("inserisci il numero di persone");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("inserisci il nome  di persone");
        fgets(nome, 4,stdin);
        fprintf(file, "%s\n", nome);
    }
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("ERRORE NELLA APERTURA DEL FILE");
        return 2;
    }

    printf("nome:");
    while (fgets(nome, 4, file) != NULL) { printf("%s", nome); }
    fclose(file);

    return 0;
}


int main() {

    // Dichiaro le mie variabili
    FILE *file;
    int num;
    char nome[LEN_NAME_MAX];

    // Apro il file in modalità scrittura
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ERRORE NELLA APERTURA DEL FILE");
        return 1;
    }

    // Ottengo il numero di persone da memorizzare
    printf("inserisci il numero di persone: ");
    scanf("%d", &num);
    fflush(stdin);

    // Ottengo i nomi, li scrivo nel file e poi chiudo il file
    printf("inserisci i nomi da memorizzare:\n");
    for (int i = 0; i < num; i++) {
        fgets(nome, LEN_NAME_MAX, stdin);
        fprintf(file, "%s", nome);
    }
    fclose(file);

    // Riapro il file in modalità lettura
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("ERRORE NELLA APERTURA DEL FILE");
        return 2;
    }

    // Stampo a schermo tutti i nomi memorizzati
    printf("\nNOMI:\n");
    while (fgets(nome, LEN_NAME_MAX, file) != NULL) printf("%s", nome);
    fclose(file);

    return 0;
}
