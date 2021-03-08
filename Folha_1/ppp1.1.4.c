#include <stdio.h>

int main() {
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int media = (n1 + n2+ n3) / 3;
    printf("Média dos valores %d, %d, %d é: %d", n1, n2, n3, media);
}
