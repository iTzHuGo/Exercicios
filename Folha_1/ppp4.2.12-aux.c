#include <stdio.h>
#include <stdbool.h>

bool valido(int d, int min, int max){
    return(d >= min && d <= max && d % 2 == 1);
}

void imprimeBrancos(int b){
    for (int i = 0; i < b; i++) {
        putchar(' ');
    }
}

void imprimeAlternado(int c){
    for (int i = 0; i < c; i++) {
        if (i % 2 == 0)
            putchar('o');
        else putchar('+');
    }
}