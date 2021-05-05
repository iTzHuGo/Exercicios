// Árvore binária
// João Gabriel Silva 2021-04-25

#define MAXNOME 100
#include <stdbool.h>
#include "lib-utf8.h"

struct pessoa {
    char nome[MAXNOME + 1];
    int ano_nasc;
};

struct no {
    struct pessoa gente;
    struct no *left;
    struct no *right;
};

struct arvore_binaria {
    struct no * raiz;
};

// deve ser sempre chamada antes da árvore ser usada
void inicializar_arvore(struct arvore_binaria * pa);

// coloca uma pessoa na árvore. Devolve true se tudo correu bem, devolve false se não havia espaço disponível
bool colocar(struct arvore_binaria * pa, struct pessoa alguem);

// obter o ano de nascimento de alguém. Ignora diferença entre maiúsculas e minúsculas.
// Devolve false se a pessoa não foi encontrada
bool consultar(struct arvore_binaria * pa, char nome[], int * pano);

// Obter os dados da próxima pessoa (por ordem alfabética) presente na árvore, a seguir ao nome indicado
// Se ppessoa.nome == "\0", devolve a primeira pessoa (por ordem alfabética) presente na árvore
// Se não há ninguém na árvore com um nome a seguir ao fornecido, devolve false
// Se há uma pessoa na árvore que satisfaz o pedido, devolve true, e coloca os dados em *ppessoa
bool seguinte(struct arvore_binaria * pa, struct pessoa * ppessoa);


