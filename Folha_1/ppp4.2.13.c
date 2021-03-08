#include <stdio.h>
#define TOL 0.4

double dist(double alfa);
double alfa(void);
double dist_barco(void);

int main(void){
    double tiro, erro, erro1, distancia_barco = dist_barco();
    for (int i = 0; i < 10; i++) {
        tiro = dist(alfa());
        erro = distancia_barco - tiro;
        erro1 = erro;
        if (erro < 0) erro1 = -erro;
        if (erro <= TOL){
            printf("Acertou!!\n");
            break;
        }
        else
            printf("Não acertou - a bala caiu a %f do barco\n", erro1);

    }
}