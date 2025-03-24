#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("esempio.txt", "w");
    if (file == NULL) {
        printf("il file non è aperto ");
        return 2;
    }

    char alice[6];
    printf("inserisci testo");
    fgets(alice, sizeof(alice), stdin);

    fprintf(file, "%s", alice);
    fclose(file);


    file = fopen("esempio.txt", "r");
    if (file == NULL) {
        printf("il file non è aperto ");
        return 1;
    }

    while (fgets(alice, sizeof(alice), stdin) != NULL) printf("%s", alice);

    fclose(file);
    return 0;
}
