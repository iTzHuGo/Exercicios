// Exemplo de utilização de estruturas
// João Gabriel Silva - 2021/03/20
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include "lib-utf8.h"

static void novo(void);
static void tel(void);
static void listar(void);
static int ler_int(int *pres);

#define MAXCONTACTOS 20 // maximo de contactos a armazenar
#define TAMMAXNOME 50   // número máximo de bytes no nome

struct contactos {
    char nome[TAMMAXNOME];
    int num;
} lista[MAXCONTACTOS];


int main() {
    int escolha, i;

    setlocale(LC_ALL, "pt_PT.utf8");

    // inicializar a lista
    for (i = 0; i < MAXCONTACTOS; i++) {
        lista[i].nome[0] = 0;
        lista[i].num = 0;
    }

    while (1) {
        printf("\n"
               "  0 - Sair\n"
               "  1 - Introduzir contacto novo\n"
               "  2 - Obter telefone\n"
               "  3 - Listar tudo\n"
               "Escolha: ");
        escolha = ' ';
        while (isspace(escolha))
            escolha = getchar();
        while (getchar() != '\n'); //limpar o resto da linha
        if (escolha == '0') return 0;
        if (escolha == '1') novo();
        else if (escolha == '2') tel();
        else if (escolha == '3') listar();
        else printf("Escolha inválida\n");
    }
}

void novo(void) {
    int i, t;
    char nome[TAMMAXNOME];

    // procurar a primeira posição vazia
    i = 0;
    while (i < MAXCONTACTOS && lista[i].nome[0] != 0) {
        i++;
    }
    if (i == MAXCONTACTOS) {
        printf("Não há espaço para mais contactos\n");
        return;
    }
    printf("Introduza o nome: ");
    fgets_u8(nome, TAMMAXNOME, stdin);
    t = (int) strlen(nome);
    if (nome[t - 1] == '\n')
        nome[t - 1] = 0;
    else
        while (getchar() != '\n');
    strtobase_u8(lista[i].nome, nome);
    printf("Introduza o número: ");
    while (ler_int(&lista[i].num) != 0) {
        printf("Erro. Introduza de novo: ");
    }
}

void tel(void) {
    char nome_in[TAMMAXNOME];
    char nome_base[TAMMAXNOME];
    int i, t;

    printf("Introduza o nome: ");
    fgets_u8(nome_in, TAMMAXNOME, stdin);

    t = (int) strlen(nome_in);
    if (nome_in[t - 1] == '\n')
        nome_in[t - 1] = 0;
    else
        while (getchar() != '\n');
    strtobase_u8(nome_base, nome_in);

    i = 0;
    while (i < MAXCONTACTOS && lista[i].nome[0] != 0 && strcmp(nome_base, lista[i].nome) != 0)
        i++;
    if (i < MAXCONTACTOS && lista[i].nome[0] != 0)
        printf("Número: %d\n", lista[i].num);
    else
        printf("Nome não encontrado\n");
}

// mostrar a lista toda
void listar(void) {
    int i;

    if (lista[0].nome[0] == 0)
        printf("Lista vazia\n");
    else
        for (i = 0; i < MAXCONTACTOS && lista[i].nome[0] != 0; i++) {
            printf("%s - ", lista[i].nome);
            printf("%d\n", lista[i].num);
        }
}

/* devolve zero se não houve problemas, um código de erro se houve:
 *   1 - EOF
 *   2 - Carateres inválidos ou a mais
 *   3 - Transbordo
*/
#define TAM_LINHA_INT 30 //tamanho suficiente para qualquer inteiro
static int ler_int(int *pres) {
    char *tail, *p;
    long int numl;
    int num, c;
    char linha[TAM_LINHA_INT];

    // buscar linha
    p = fgets(linha, TAM_LINHA_INT, stdin);
    if (p == NULL) {
        return 1;  // EOF
    }

    //Se a linha lida não termina por '\n' a linha era demasiado longa - erro
    c = (int) strlen(linha);
    if (linha[c - 1] != '\n') {
        // limpar o resto da linha
        while ((c = fgetc(stdin)) != EOF && c != '\n');
        return 2;
    }

    //converter para long
    errno = 0;
    numl = strtol(linha, &tail, 0);
    if (errno) {
        return 3;  //transbordo
    }

    // verificar que só há espaço branco no resto da linha
    while ((*tail) != 0) {
        if (!isspace((int) *tail)) {
            return 2;
        }
        tail++;
    }

    // converter de long para int
    if (numl <= INT_MAX && numl >= INT_MIN) {
        num = (int) numl;
        *pres = num;
        return 0;
    } else
        return 3; //Transbordo

}
