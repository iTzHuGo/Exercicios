#include <stdio.h>
#include <string.h>

int main() {
    FILE *fich = NULL;
    FILE *fich_s;
    char nome_fich[50];
    char nome_fich_saida[60];

    char *ps;
    char c;
    int i;

    while (fich == NULL) {
        printf("Nome do ficheiro?");
        ps = fgets(nome_fich, 50, stdin);
        i = (int)strlen(nome_fich);
        if (nome_fich[i - 1] == '\n')
            nome_fich[i - 1] = 0;
        if (ps != NULL) {
            fich = fopen(nome_fich, "r");
            if (fich == NULL)
                fprintf(stderr, "Ficheiro não existe.\n");
        }
    }
    strcpy(nome_fich_saida, nome_fich);
    strcpy(nome_fich_saida, ".out");
    fich_s = fopen(nome_fich_saida, "w");
    if (fich_s == NULL){
        fprintf(stderr, "Erro ao criar o ficheiro de saida\n");
        return 1;
    }

    while ((c = (char)fgetc(fich)) != EOF) {
        if (c != '\r'){
            fputc(c, fich_s);
        }
    }
    if (fclose(fich) != 0)
        fprintf(stderr, "Erro ao criar o ficheiro de entrada\n");
    if (fclose(fich_s) != 0)
        fprintf(stderr, "Erro ao criar o ficheiro de saida\n");

}