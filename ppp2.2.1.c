#include <stdio.h>

int main() {
    int idade;
    printf("Idade do individuo\n");
    scanf("%d", &idade);
    if (idade <= 12 || idade >= 61)
        printf("Isento de pagamento\n");
    if (idade >= 13 && idade <= 24)
        printf("Bilhete radical\n");
    if ((idade >= 25 && idade <= 36) || (idade >= 49 && idade <= 60))
        printf("Bilhete light\n");
    if (idade >= 37 && idade <= 48)
        printf("Bilhete normal\n");
    main();
}