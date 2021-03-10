#include <stdio.h>

void soma(int *a, int *b, int *sum){
    *sum = *a + *b;
}

int main(void){
    int a = 650, b = 5, sum;
    int *pa = &a, *pb = &b, *psum = &sum;
    soma(pa, pb, psum);
    printf("%d", sum);
}