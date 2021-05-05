#include <stdio.h>
#include "arvbin.h"

int main() {
    FILE *fentrada;
    fentrada = fopen("dados_bin.dat", "r");
    if (fentrada == NULL) {
        fprintf(stderr, "Erro na abertura do ficheiro de dados.\n");
        return 1;
    }
    struct pessoa alguem;

    while (fread(&alguem, sizeof(struct pessoa), 1, fentrada) == 1) {
        printf("%4d %s\n", alguem.ano_nasc, alguem.nome);
    }
    int i = 0;
    while (i >= 0) {
        printf("Ler qual posição?");
        scanf("%d", &i);
        fseek(fentrada, i * sizeof(struct pessoa), SEEK_SET);
        if (fread(&alguem, sizeof(struct pessoa), 1, fentrada) == 1) {
            printf("%4d %s\n", alguem.ano_nasc, alguem.nome);
        } else printf("Erro na leitura.\n");
    }

    if (fclose(fentrada) != 0) {
        fprintf(stderr, "Erro no fecho do ficheiro de dados.\n");
        return 1;
    }

    return 0;
}