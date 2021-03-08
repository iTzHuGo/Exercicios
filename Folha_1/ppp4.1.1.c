#include <stdio.h>


int fatorial(int n);

int main(){
    int num;
    printf("Indique um número inteiro\n");
    scanf("%d", &num);
    printf("O fatorial de %d = %d", num, fatorial(num));
}

int fatorial(int n){
    int fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial *= i;
    }
    return fatorial;
}