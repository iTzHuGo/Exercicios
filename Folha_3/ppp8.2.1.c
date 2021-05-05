#include <stdio.h>
#include <stdlib.h>

#define NUM_DATAS 9

struct data{
    int dia;
    int mes;
    int ano;
};

int menor_data(struct data tabela[], int tam);
void ordena_datas(struct data tabela[], int tam);

int main(void){
    struct data m[NUM_DATAS] = {{10, 2, 2010},
                                {2, 8, 2021},
                                {1, 2, 2002},
                                {7, 8, 2013},
                                {24, 12, 2016},
                                {16, 11, 2013},
                                {9, 9, 2018},
                                {20, 3, 2016},
                                {13, 7, 2001}};
    int k;
    k = menor_data(m, NUM_DATAS);
    printf("Ano %d mes %d dia %d\n", m[k].ano, m[k].mes, m[k].dia);
    ordena_datas(m, NUM_DATAS);
    for (int i = 0; i < NUM_DATAS; i++){
        printf("Ano %d mes %d dia %d\n", m[i].ano, m[i].mes, m[i].dia);
    }
}



int comp_datas(struct data * data1, struct data * data2){
    if (data1 -> ano > data2->ano)
        return 1;
    if (data1 -> ano < data2->ano)
        return -1;
    if (data1 -> mes > data2->mes)
        return 1;
    if (data1 -> mes < data2->mes)
        return -1;
    if (data1 -> dia > data2->dia)
        return 1;
    if (data1 -> dia < data2->dia)
        return -1;
    return 0;
}

void ordena_datas(struct data tabela[], int tam){
    qsort(tabela, tam, sizeof(struct data), (__compar_fn_t) comp_datas);
}

int menor_data(struct data tabela[], int tam){
    int j = 0;
    for (int i = 1; i < tam; i++){
        if (comp_datas(&tabela[i], &tabela[j]) < 0)
            j = i;
    }
    return j;
}