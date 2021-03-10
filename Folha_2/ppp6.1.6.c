#include <stdio.h>

void troca_n_impar(int m[], int t){
    for (int i = 0; i < t; i++){
        if (m[i] % 2 != 0)
            m[i] *= 2;
    }
}

int main(void){
    int tamanho;
    printf("Yamanho do vetor ");
    scanf("%d", &tamanho);
    int m[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Dado nº %d do vetor ", i);
        scanf("%d", &m[i]);
    }
    troca_n_impar(m, tamanho);
    for (int i = 0; i < tamanho; ++i) {
        printf("Dado nº %d da matriz modificada: %d\n", i, m[i]);
    }
}