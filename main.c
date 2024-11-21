#include <stdio.h>

float MediaAritmetica(int valori, float somma) {
    float media = somma / valori;
    return media;
}

int main() {
    int inputValori;
    float inputSomma;

    printf("Inserisci il numero di valori:\n");
    scanf("%d", &inputValori);
    printf("Inserisci la somma dei valori:\n");
    scanf("%f", &inputSomma);

    float risultato = MediaAritmetica(inputValori, inputSomma);
    printf("La media e ': %.2f\n", risultato);


    return 0;
}
