#include <stdio.h>

int main() {
    int valor_da_compra;
    printf("Indique o valor da compra");
    scanf("%d", &valor_da_compra);

    int valor_entregue;
    printf("Indique o valor entregue");
    scanf("%d", &valor_entregue);

    int notas = 0;
    int moedas = 0;
    int troco = valor_entregue - valor_da_compra;

    if (valor_entregue == valor_da_compra)
        printf("Não há troco.");
    else if (valor_entregue < valor_da_compra)
        printf("O cliente não pagou o suficiente");
    else {
        while (troco > 0) {
            if (troco > 50) {
                notas++;
                troco = troco - 50;
            } else if (troco >= 20) {
                notas++;
                troco = troco - 20;
            } else if (troco >= 10) {
                notas++;
                troco = troco - 10;
            } else if (troco >= 5) {
                notas++;
                troco = troco - 5;
            } else if (troco >= 2) {
                moedas++;
                troco = troco - 2;
            } else if (troco >= 1) {
                moedas++;
                troco = troco - 1;
            }
        }
        printf("O vendedor vai precisar de %d notas e %d moedas de troco.", notas, moedas);
    }
}
