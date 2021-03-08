#include <stdio.h>

int main() {
    int num;
    printf("\nNúmero inteiro:\n");
    scanf("%d", &num);
    int impar = num % 2;
    if (impar){
        printf("O número é impar");
    }
    else printf("O número é par");
}