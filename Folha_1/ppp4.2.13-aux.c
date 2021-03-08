#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

static bool valido(double a){
    return(a >= 0 && a <= 3.1415/2);
}

double alfa(void) {
    double angulo;
    printf("Ângulo do canhão? ");
    scanf("%lf", &angulo);
    if (!valido(angulo)) {
        printf("Ângulo tem de estar entre 0 e pi/2\n");
        exit(1);
    }
    return angulo;
}

double dist(double alfa){
    double dist, v0x, v0y;
    v0x = 10.0 * cos(alfa);
    v0y = 10.0 * sin(alfa);
    dist = (v0x/9.81) * (v0y + sqrt(pow(v0y, 2) + 2 * 9.81 * 20));
    return dist;
}

double dist_barco(void){
    static int primeira_vez;
    if (primeira_vez == 0){
        srand(time(0));
        primeira_vez = 1;
    }
    double dist;
    int dist_i = rand();
    dist = 10.0 + dist_i % 10;
    return dist;
}