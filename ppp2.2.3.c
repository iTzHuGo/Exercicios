#include <stdio.h>

int main() {
    int nota;
    printf("Nota do aluno\n");
    scanf("%d", &nota);
    if (nota <= 9)
        printf("Insuficiente");
    else if (nota <= 13)
        printf("Suficiente");
    else if (nota <= 16)
        printf("Bom");
    else if (nota <= 20)
        printf("Excelente");
    else printf("Error");
}