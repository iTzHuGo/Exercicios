#include <stdio.h>
#include <stdbool.h>
#define MAX_NUM 50

int somatorio(int n);

int fatorial(int n);

int soma_fat(int n);

bool valido(int n);

int main() {
    //4.2.1
    int n;
    printf("Indique um valor inteiro: ");
    scanf("%d", &n);
    if (!valido(n)){
        printf("Valor tem de ser superior a zero e menor ou igual que %d.\n", MAX_NUM);
        return 1;
    }
    if (n >= 20){
        printf("Somatório de %d = %d", n, somatorio(n));
    }
    if (n > 10 && n < 20)
        printf("Fatorial de %d = %d", n, fatorial(n));
    if (n < 10)
        printf("Somatório de fatoriais de %d = %d", n, soma_fat(n));
}

bool valido(int n){
    return (n > 0 && n <= MAX_NUM);
}

int somatorio(int n){
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma = soma + i;
    }
    return soma;
}

int fatorial(int n){
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

int soma_fat(int n){
    int soma_fat = 1;
    for (int i = 0; i <= n; ++i) {
        soma_fat = soma_fat + fatorial(i);
    }
    return soma_fat;
}