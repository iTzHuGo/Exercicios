#include <stdio.h>

int main() {
    char* nomes[] = {"Triângulo", "Quadrilatero", "Pentágono", "Hexágono",
                     "Heptágono", "Octógono", "Eneágono", "Decágono", "Undecágono"};
    int lados = 2;
    printf("Número de lados da figura geometrica\n");
    while (lados == 2) {
        scanf("%d", &lados);
        if (lados > 2 && lados < 12){
            printf("%s", nomes[lados - 3]);
        }
        else{
            lados = 2;
            printf("Escreva um número entre 3 e 12.");
        }
    }
}