#include <stdio.h>
#include <stdbool.h>
#define MIN 3
#define MAX 49

bool valido(int d, int min, int max);
void imprimeBrancos(int b);
void imprimeAlternado(int c);

int main(void){
    int d;
    do {
        printf("Dimensão do quadrado? ");
        scanf("%d", &d);
    }
    while (!valido(d, MIN, MAX));

    for (int l = 1; l <= d / 2; l++) {
        imprimeBrancos(d / 2 - (l - 1));
        imprimeAlternado(1 + 2 * (l - 1));
        imprimeBrancos(d / 2 - (l - 1));
        putchar('\n');
    }
    imprimeAlternado(d);
    putchar('\n');
    for (int l = d / 2 + 2; l <= d; l++) {
        imprimeBrancos(l - ((d / 2) + 1));
        imprimeAlternado(1 + 2 * (d - l));
        imprimeBrancos(l - ((d / 2) + 1));
        putchar('\n');
    }

}
