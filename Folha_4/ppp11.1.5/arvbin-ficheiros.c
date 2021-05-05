// Teste de árvore binária
// João Gabriel Silva 2021-04-25
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "arvbin.h"

#define MAXNOME 100

char *ler_nome(char *linha, int lim, FILE *fp);

void mostrar_tudo(struct arvore_binaria *pa);

int main(void) {
    struct pessoa alguem;
    char nome_fich[MAXNOME + 1];
    FILE *fich = NULL;
    char ano_str[10];
    int ano;

    setlocale(LC_ALL, "pt_PT.utf8");

    struct arvore_binaria arvore;
    inicializar_arvore(&arvore);

    // pedir nome do ficheiro que contém os dados
    while (fich == NULL) {
        printf("Nome do ficheiro de dados? ");
        if (ler_nome(nome_fich, MAXNOME + 1, stdin) == NULL)
            return 0;
        fich = fopen(nome_fich, "r");
        if (fich == NULL)
            fprintf(stderr, "Ficheiro não existe\n");
    }

    // inserir pares {nome,data nascimento} na árvore
    while (ler_nome(alguem.nome, MAXNOME + 1, fich) != NULL && strcasecmp(alguem.nome, "Fim") != 0) {
        if (ler_nome(ano_str, 6, fich) != NULL) {
            alguem.ano_nasc = (int) strtol(ano_str, NULL, 0);
            if (!colocar(&arvore, alguem) != 0) {
                fprintf(stderr, "Não há espaço para inserir\n");
                break;
            }
        }
    }

    printf("Dados inseridos na árvore:\n\n");
    if (fclose(fich) != 0) {
        fprintf(stderr, "Erro no fecho do ficheiro de entrada.\n");
        return 1;
    }
    mostrar_tudo(&arvore);

    FILE *fsaida;

    fsaida = fopen("dados_bin.dat", "w");
    if (fsaida == NULL) {
        fprintf(stderr, "Erros na criação do ficheiro de saida.\n");
        return 1;
    }

    alguem.nome[0] = 0;
    while (seguinte(&arvore, &alguem)) {
        printf("%4d %s\n", alguem.ano_nasc, alguem.nome);
        if (fwrite(&alguem, sizeof(struct pessoa), 1, fsaida) != 1) {
            fprintf(stderr, "Erro na escrita no ficheiro.\n");
            return 1;
        }
    }
}

/* Retira carateres ascii de controlo, bem como os espaços no início e fim
   "lim" inclui o espaço para o zero de terminação
   Devolve NULL se EOF, devolve o endereço recebido em caso contrário */
char *ler_nome(char *linha, int lim, FILE *fp) {
    if (fgets_u8(linha, lim, fp) == NULL)
        return NULL;
    bool inicio = true;
    int i = 0, j = 0;
    while (linha[i] != 0) {
        if (inicio && isspace(linha[i]))
            i++;
        else {
            inicio = false;
            if (iscntrl(linha[i])) {
                i++;
            } else {
                linha[j++] = linha[i++];
            }
        }
    }
    if (i > 0) {
        if (linha[i - 1] != '\n') {
            //limpar o resto da linha
            int c = fgetc(fp);
            while ((c != EOF) && (c != '\n'))
                c = fgetc(fp);
        }
        linha[j] = 0;
    }
    return linha;
}