#include <stdio.h>

int main() {
    int base, res;
    char operacao;
    printf("Qual a operação desejada? (+, -, /, *)");
    scanf("%c", &operacao);
    printf("Qual a base desejada?");
    scanf("%d", &base);
    for (int i = 1; i < 11; ++i) {
        if (operacao == '+')
            res = base + i;
        else if (operacao == '-')
            res = base - i;
        else if (operacao == '*')
            res = base * i;
        else if (operacao == '/')
            res = base / i;
        printf("%d %c %d = %d\n", base, operacao, i, res);
    }
}