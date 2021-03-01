#include <stdio.h>

void permutacoes(int n);

int main(){
    int num;
    printf("Indique um n ");
    scanf("%d", &num);
    permutacoes(num);
}

void permutacoes(int n){
    int perm = 1;

    for (int k = 2; k <= n - 1 ; k++) {
        int x = n;
        for (int i = 0; i < k; ++i) {
            perm *= x;
            x--;
        }
        printf("p(%d,%d) = %d\n", n, k, perm);
        perm = 1;
    }
}