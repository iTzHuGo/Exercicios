#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int x) {
    bool primo;
    if (x == 2)
        primo = 0;
    if (x > 2) {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                primo = 0;
                break;
            } else primo = 1;
        }
    }
    return primo;
}

int main(void) {
    int n, m = 0, c = 2;
    printf("Indique o N\n");
    scanf("%d", &n);
    int ma[n];
    while (ma < n){
        if (ePrimo(c)){
            ma[m] = c;
            m++;
        }
        c++;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ma[i]);
    }
}