#include <stdio.h>

int main(void){
    long int a, b, c, d, biggest;
    long int *pa = &a;
    long int *pb = &b;
    long int *pc = &c;
    long int *pd = &d;
    long int *pbiggest = &biggest;
    printf("Indique 4 números no formato a,b,c,d");
    scanf("%ld,%ld,%ld,%ld", pa, pb, pc, pd);
    if (*pa > *pb && *pa > *pc && *pa > *pd){
        *pbiggest = *pa;
    }
    else if (*pb > *pa && *pb > *pc && *pb > *pd){
        *pbiggest = *pb;
    }
    else if (*pc > *pa && *pc > *pb && *pc > *pd){
        *pbiggest = *pc;
    }
    else if (*pd > *pa && *pd > *pb && *pd > *pc){
        *pbiggest = *pd;
    }
    printf("O maior número entre (%ld, %ld, %ld, %ld) é %ld", *pa, *pb, *pc, *pd, *pbiggest);
}