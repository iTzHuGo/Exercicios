#include <stdio.h>

int main() {
    int linhas = 50, l = 1;
    char ast = '*';
    while (l <= linhas) {
        for (int j = 0; j < linhas - l; j++) {
            printf(" ");
        }
        for (int i = l; i > 0; i--) {
            printf("%2c", ast);
        }
        printf("\n");
        l++;
    }
}