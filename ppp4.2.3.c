#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostraSePremio(int bilhete,int premiado,int n);

int main(void){
    int premiado=0;
    srand(time(0));
    while(premiado<100000){
        premiado = rand();
        premiado = premiado % 1000000;
    }
    printf("Premiado %d\n",premiado);
    printf("2º premiado-terminação com 5 digitos %d\n",premiado%1000000);
    printf("3º premiado-terminação com 4 digitos %d\n",premiado%100000);

    int bilhete;
    while(bilhete >= 10000 && bilhete >= 999999){
        mostraSePremio(bilhete,premiado,6);
        mostraSePremio(bilhete,premiado,5);
        mostraSePremio(bilhete,premiado,4);
    }
    printf("Bilhete da lotaria?");
    scanf("%d",&bilhete);

}

void mostraSePremio(int bilhete,int premiado,int n){
    int num1,num2,num3=1;
    for(int i=1;i<=n;i++){
        num3 *= 10;
    }
    num1= premiado % num3; //isola algarismos
    num2= bilhete % num3;
    if (num1 == num2){
        printf("Bilhete premiado! = %d\n,",bilhete);
    }
}