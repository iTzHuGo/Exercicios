/*
 *  Done
 1.1.1
 1.1.2
 1.1.3
 1.1.4
 1.2.1
 1.2.2
 2.1.1
 2.1.2
 2.1.3
 2.2.1
 2.2.2
 2.2.3
 2.2.4
 2.2.5
 2.2.6
 2.2.7
 2.3.2
 3.1.1
 3.1.2
 3.1.3
 3.2.3

 *  Doing
 *  (2.3.1)
 *  3.1.4
 *  3.1.5
 *  3.2.1
 *  3.2.2
 *  3.2.4
 *  3.2.5
 *  3.2.6
 *  3.2.7
 *  3.2.8
 *  3.2.9
 *  3.2.10
 *  3.2.11
 *
*/
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Indique 2 números no formato n1,n2");
    scanf("%d,%d", n1, n2);
    int resto = 1;

    while (resto != 0){
        for (int i = 1; i < 15; ++i) {
            if ((n1 % i == 0) && (n2 % i == 0)){
                printf("%d", i);
                resto = 0;
                break;
            }
        }
    }

}
