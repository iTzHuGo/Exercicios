#include <stdio.h>

int main() {
    int num1, num2;
    printf("\nNúmero inteiro\n");
    scanf("%d", &num1);
    printf("Número inteiro\n");
    scanf("%d", &num2);
    int impar1 = num1 % 2;
    int impar2 = num2 % 2;

    if ((impar1 == 1) && (impar2 == 1)){ //2 impares
        int produto = num1 * num2;
        printf("%d", produto);
    }
    else if ((impar1 == 0) && (impar2 == 0)){ // 2 pares
        int soma = num1 + num2;
        printf("%d", soma);
    }
    if (impar1 != impar2){ // 1 par e 1 impar
        if (num1 % 2)
            printf("%d", num1);
        else printf("%d", num2);
    }
    main();
}