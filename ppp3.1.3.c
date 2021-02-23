#include <stdio.h>

int main() {
    int num, input;int last = 1215752191;
    printf("Número de números: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        printf("Número: ");
        scanf("%d", &input);
        if (input < last)
            last = input;
    }
    printf("Valor mínimo: %d", last);
}