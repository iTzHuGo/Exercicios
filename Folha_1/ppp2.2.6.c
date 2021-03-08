#include <stdio.h>

int main() {
    char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril",
                     "Maio", "Junho", "Julho", "Agosto",
                     "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("Indique um número de um mês.\n");
    int x = 0;
    while (x == 0){
        scanf("%d", &x);
        if (x > 0 && x < 13){
            printf("%s", meses[x - 1]);
            break;
        }
        else{
            printf("O número inserido não corresponte a nenhum mês.\n");
            x = 0;
        }
    }
}