#include <stdio.h>

int main() {
    int sum = 0;
    int limite, last;
    printf("Indique um limite\n");
    scanf("%d", &limite);
    for (int i = 1; sum <= limite; ++i) {
        last = i;
        sum += i;
    }
    printf("Limite: %d\nSoma: %d\nParou no nº: %d", limite, sum, last);
}