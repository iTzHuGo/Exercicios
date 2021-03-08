#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int x);

int main(){
    int a,b;
    printf("Indique um minimo a e um max b no formato a/b\n");
    scanf("%d/%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (ePrimo(i))
            printf("%d, ", i);
    }
    /*if (ePrimo(num) == 0)
        printf("%d não é primo\n", num);
    else printf("%d é primo\n", num);*/
}

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
