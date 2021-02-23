#include <stdio.h>

int main() {
    int limit, sum;
    printf("Indique um limite: ");
    scanf("%d", &limit);
    for (int i = 1; i <= limit; ++i) {
        sum += i;
    }
    printf("%d", sum);
}