#include <stdio.h>

static int h[5] = {0, 0, 0, 0, 0};

void media_pesada(int i, int *pmp) {
    int j, res;
    for (j = 4; j > 0; j--)
        h[j] = h[j - 1];
    h[0] = i;
    res = (5 * h[0] + 4 * h[1] + 3 * h[2] + 2 * h[3] + 1 * h[4]) / 15;
    *pmp = res;
}

void media_simples(int i, int *pms) {
    int j, res;
    for (j = 4; j > 0; j--)
        h[j] = h[j - 1];
    h[0] = i;
    res = (h[0] + h[1] + h[2] + h[3] + h[4]) / 5;
    *pms = res;
}

int main(void) {
    int i, t, media;
    printf("Tipo de filtro ? (1- média simples, 2- média pesada) ");
    scanf("%d", &t);
    if (t != 1 && t != 2) return 1;
    while (1) {
        printf("Número ? ");
        scanf("%d", &i);
        if (i < 0) break;
        if (t == 2) {
            media_pesada(i, &media);
            printf("Média pesada %d\n", media);
        } else {
            media_simples(i, &media);
            printf("Média simples %d\n", media);
        }

    }
    return 0;
}