#include <stdio.h>
#include <stddef.h>

int main() {

    FILE *file = fopen("gigi.txt", "w");
    if (file == NULL) {
        printf("impossibile aprire il file");
        return 1;
    }

    fprintf(file, "Oggi c'è il sole!\nOggi piove!\nOggi è nuvolo!\nOggi non esco!\nOggi c'è di nuovo il sole!");//scrivo dentro il file

    fclose(file);
    file = fopen("gigi.txt", "r");
    if (file == NULL) {
        printf("impossibile aprire il file");
        return 1;
    }
    char mario[200]; //lettura dal file
    for(fgets(mario, 200, file); !feof(file); fgets(mario, 200, file)) {
        printf("%s", mario);
    }
    printf("%s", mario);

    //chiudo il file
    fclose(file);
    return 0;
}