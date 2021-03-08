#include <stdio.h>

int main(void){
    float a, b, soma, diferenca, divisao, multiplicacao;
    float *pa = &a;
    float *pb = &b;
    float *psoma = &soma;
    float *pdiferenca = &diferenca;
    float *pdivisao = &divisao;
    float *pmultiplicacao = &multiplicacao;
    printf("Número a = ");
    scanf("%f", pa);
    printf("Número b = ");
    scanf("%f", pb);
    *psoma = *pa + *pb;
    *pdiferenca = *pa - *pb;
    *pdivisao = *pa / *pb;
    *pmultiplicacao = *pa * *pb;
    printf("Soma = %.2f (%p)\nDiferença = %.2f (%p)\nDivisão = %.2f (%p)\n"
           "Multiplicação = %.2f (%p)", *psoma, &psoma,
           *pdiferenca, &pdiferenca, *pdivisao, &pdivisao, *pmultiplicacao, &pmultiplicacao);
    return 0;
}