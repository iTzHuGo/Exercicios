#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Data no formato dia/mes/ano\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (ano >= 2005 && ano <= 2006){
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) {
            if (dia >= 1 && dia < 31) {
                dia += 1;
            }
            else if (dia == 31){
                dia = 1;
                mes += 1;
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia >= 1 && dia < 30) {
                dia += 1;
            }
            else if (dia == 30){
                dia = 1;
                mes += 1;
            }
        }
        else if (mes == 2){
            if (dia >= 1 && dia <= 27){
                dia += 1;
            }
            else if (dia == 28) {
                dia = 1;
                mes += 1;
            }
        }
        else{
            if (dia >= 1 && dia <= 30){
                dia += 1;
            }
            else if (dia == 31){
                dia = 1;
                mes = 1;
                ano += 1;
            }
        }
        printf("%d/%d/%d", dia, mes, ano);
        return 0;
    }
    else return 1;

}