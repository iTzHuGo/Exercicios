#include <stdio.h>

int main() {
    int dia, mes;
    printf("Data em formato dia/mes\n");
    scanf("%d/%d", &dia, &mes);
    if (mes >= 3 && mes <= 6) {
        if (mes == 3) {
            if (dia >= 20)
                printf("Primavera\n");
        } else if (mes == 6) {
            if (dia < 21)
                printf("Primavera\n");
        } else printf("Primavera\n");
    }
    if (mes >= 6 && mes <= 9) {
        if (mes == 6) {
            if (dia >= 21)
                printf("Verão\n");
        } else if (mes == 9) {
            if (dia < 22)
                printf("Verão\n");
        } else printf("Verão\n");
    }
    if (mes >= 9 && mes <= 12) {
        if (mes == 9) {
            if (dia >= 22)
                printf("Outono\n");
        } else if (mes == 12) {
            if (dia < 21)
                printf("Outono\n");
        } else printf("Outono\n");
    }
    if (mes == 12 || (mes >= 1 && mes <= 3)) {
        if (mes == 12) {
            if (dia >= 21)
                printf("Inverno\n");
        } else if (mes == 3) {
            if (dia < 20)
                printf("Inverno\n");
        } else printf("Inverno\n");
    }
}