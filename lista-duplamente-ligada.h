#include <stdbool.h>

struct mensagem {
    char destino[50];
    char origem[50];
    unsigned char dados[1024];
};

struct no_fila {
    struct mensagem m;
    bool ocupado;
    int mens_seguinte;
    int mens_anterior;
};

#define TAMFILA 10 /* maximo de mensagens em espera */
struct base {
    struct no_fila no[TAMFILA];
    int tam;
    int entrada_lista;
    int saida_lista;
};

bool colocar(struct base *pf, struct mensagem mens);

bool retirar(struct base *pf, struct mensagem *pmens);

void inicializar(struct base *pf);

int no_elementos(struct base *pf);

void apagar(struct base *pf);