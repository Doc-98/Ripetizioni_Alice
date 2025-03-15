//
// Created by dvinc on 3/14/2025.
//


#include <stdio.h>

int main() {

    float peso, altezza, imc;

    printf("Inserisci il peso: ");
    scanf("%f", &peso);
    printf("Inserisci l'altezza: ");
    scanf("%f", &altezza);

    imc = peso / (altezza * altezza);


    if (imc < 18.5) printf("Sottopeso");
    else if (imc >= 25) printf("Sovrappeso");
    else printf("Normopeso");

    return 0;
}
