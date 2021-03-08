#include <stdio.h>

int main(void){
    int a, b, soma;
    int *pa, *pb, *psoma;
    pa = &a;
    pb = &b;
    psoma = & soma;
    printf("Número a ? ");
    scanf("%d", pa);
    printf("Número b ? ");
    scanf("%d", pb);
    *psoma = *pa + *pb;
    printf("%d", *psoma);
}