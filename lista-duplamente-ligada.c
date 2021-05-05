#include "lista-duplamente-ligada.h"
#include <string.h>

void inicializar(struct base *pf) {
    pf->tam = TAMFILA;
    // a fila está inicialmente vazia
    pf->entrada_lista = TAMFILA - 1;
    pf->saida_lista = TAMFILA - 1;
    for (int i = 0; i < TAMFILA; i++)
        pf->no[i].ocupado = false;
}

static int contar(struct base *pf, int pos) {
    if (pos == -1 ) return 0;
    return(1 + contar(pf, pf->no[pos].mens_seguinte));
}

int no_elementos(struct base *pf) {
    return(contar(pf,pf->entrada_lista));
}

bool colocar(struct base *pf, struct mensagem mens) {
    int i, anterior, prox;
    //Procurar uma posição disponível
    for (i = pf->tam - 1; i >= 0 && pf->no[i].ocupado; i--);
    if (i < 0) {
        //fila cheia - não é possível inserir mais nada
        return false;
    }
    //colocar mensagem na fila
    pf->no[i].m = mens;

    //Procurar a posição onde a mensagem deve ficar
    if (!(pf->no[pf->entrada_lista].ocupado)) {
        // fila vazia, inserir primeira mensagem
        pf->entrada_lista = i;
        pf->saida_lista = i;
        pf->no[i].mens_seguinte = -1;
        pf->no[i].mens_anterior = -1;
    } else {
        // fila contém mensagens
        if (strcmp(pf->no[pf->entrada_lista].m.destino,
                   pf->no[i].m.destino) > 0) {
            // inserir à entrada da lista
            pf->no[i].mens_seguinte = pf->entrada_lista;
            pf->no[i].mens_anterior = -1;
            pf->no[pf->entrada_lista].mens_anterior = i;
            pf->entrada_lista = i;
        } else {
            // procurar posição de inserção
            anterior = pf->entrada_lista;
            prox = pf->no[pf->entrada_lista].mens_seguinte;
            while (prox >= 0 && strcmp(pf->no[prox].m.destino,
                                       pf->no[i].m.destino) < 0) {
                anterior = prox;
                prox = pf->no[prox].mens_seguinte;
            }
            if (prox < 0) {
                // inserir na saida da lista
                pf->no[anterior].mens_seguinte = i;
                pf->no[i].mens_seguinte = -1;
                pf->no[i].mens_anterior = anterior;
                pf->saida_lista = i;
            } else {
                // inserir a meio da lista
                pf->no[anterior].mens_seguinte = i;
                pf->no[i].mens_anterior = anterior;
                pf->no[i].mens_seguinte = prox;
                pf->no[prox].mens_anterior = i;
            }
        }
    }
    pf->no[i].ocupado = true;
    return true;
}

bool retirar(struct base *pf, struct mensagem *pmens) {
    if (!pf->no[pf->saida_lista].ocupado) {
        // lista vazia
        return false;
    }
    *pmens = pf->no[pf->saida_lista].m;
    pf->no[pf->saida_lista].ocupado = false;
    if (pf->no[pf->saida_lista].mens_anterior != -1) {
        // havia mais do que uma mensagem na lista
        pf->saida_lista = pf->no[pf->saida_lista].mens_anterior;
        pf->no[pf->saida_lista].mens_seguinte = -1;
    }
    return true;
}