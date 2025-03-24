#include <stdio.h>
#include <string.h>
#define NOME_FILE "testing.txt"
#define NAME_LEN_MAX 30
#define NUM_LEN_MAX 15

int appendStringToFile(char *nomeFile, char *stringa) {

    FILE *file = fopen(nomeFile, "a");
    if (file == NULL) {
        printf("Errore nell'apertura del file\nOperazione annullata\n");
        return 0;
    }

    fprintf(file, "%s", stringa);
    fclose(file);
    return 1;
}

int printFile(char *nomeFile) {

    FILE *file = fopen(nomeFile, "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file\nOperazione annullata\n");
        return 0;
    }

    char stringa[NAME_LEN_MAX + NUM_LEN_MAX + 1];
    while (fgets(stringa, sizeof(stringa), file) != NULL) {
        printf("%s", stringa);
    }
    fclose(file);
    return 1;
}

int addNewContact(char *nome, char *numero) {
    char str[NAME_LEN_MAX + NUM_LEN_MAX + 1] = "";
    strcat(str, nome);
    strcat(str, ": ");
    strcat(str, numero);
    strcat(str, "\n");
    return appendStringToFile(NOME_FILE, str);
}

int aggiungiContatto() {

    char nome[NAME_LEN_MAX], numero[NUM_LEN_MAX];

    printf("Inserisci il nome del nuovo contatto:\n");
    scanf("%[^\n]", nome);
    fflush(stdin);

    printf("Inserisci il numero del nuovo contatto:\n");
    scanf("%[^\n]", numero);
    fflush(stdin);

    return addNewContact(nome, numero);
}

int main() {

    int scelta = 1;

    while(scelta) {
        printf("Scegli operazione:\n1 - Aggiungi Contatto\n2 - Visualizza contatti\n0 - Esci\n");
        scanf("%d", &scelta);
        fflush(stdin);
        switch (scelta) {
            case 1:
                aggiungiContatto();
                printf("\n");
                break;
            case 2:
                printf("\n ~~~~ RUBRICA ATTUALE ~~~~\n");
                printFile(NOME_FILE);
                printf("\n");
                break;
            case 0:
                printf("\n\n~~ USCITA ~~");
                break;
            default:
                printf("\n\nOperazione non valida\n");
        }
    }
    return 0;
}