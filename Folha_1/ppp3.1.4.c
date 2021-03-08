#include <stdio.h>

int main() {
    int x,y;
    printf("Número: ");
    scanf("%d", &x);
    for (int i = 0; i < 4 && (y = x * i) <= 100; ++i) {
        printf("%d\n", y);
    }
}