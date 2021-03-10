#include <stdio.h>

int main(void){
    int m[10], n[10];
    for (int i = 0; i < 10; i++){
        printf("Dado nº %d do vetor ", i);
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < 10; i++) {
        n[9-i] = m[i];
    }
    for (int i = 0; i < 10; ++i) {
        printf("Dado nº %d da matriz invertida: %d\n", i, n[i]);
    }
}