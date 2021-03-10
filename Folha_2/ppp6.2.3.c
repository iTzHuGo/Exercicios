#include <stdio.h>

void f(int m[][2], int t1) {
    for (int i = 0; i < t1; i++) {
        if (m[i][1] != 0) {
            for (int j = i + 1; j < t1; j++) {
                if (m[i][0] == m[j][0]) {
                    m[i][1]++;
                    m[j][1] = 0;
                }
            }
        }
    }
}

int main(void) {
    int m[5][2] = {{12, 1},
                   {34, 1},
                   {12, 1},
                   {12, 1},
                   {43, 1}};
    f(m, 5);
    for (int i = 0; i < 5; i++) {
        if (m[i][1] != 0)
            printf("Número %d surge %d vezes\n", m[i][0], m[i][1]);
    }
}
