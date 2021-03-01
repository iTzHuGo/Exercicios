#include <stdio.h>

int main() {
    int linhas;
    printf("Número de linhas? ");
    scanf("%d", &linhas);
    if (linhas < 2 || linhas > 20){
        printf("Número de linhas tem que estar entre 2 e 20");
        return 1;
    }
    int l = 1, num = 1,k;
    while (l <= linhas){ //controi as linhas
        k = linhas * 4 / 2 - (2* l); //posição inicial da linha
        for (; k > 0; k--) {
            printf(" ");
        }
        for (int j = l; j > 0; j--) {
            printf("%4d", num++);
        }
        printf("\n");
        l++;
    }
}