#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int x){
    bool primo;
    if (x == 1 || x == 2)
        primo = 1;
    if (x > 2) {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                primo = 0;
                break;
            }
            else primo = 1;
        }
    }
    return primo;
}

int sumhtpo(int n) {
    int r = 0;
    int counter = 0;
    while (n != 1) {
        r += n;
        if (ePrimo(n))
            counter++;
        if (n % 2 == 0)
            n = n / 2;
        else {
            n = 1 + (3 * n);
        }
    }
    printf("%d", counter);
    return r;
}

int main() {
    sumhtpo(41);
}