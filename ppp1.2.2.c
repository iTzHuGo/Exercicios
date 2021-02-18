#include <stdio.h>

int main() {
    float temp_f = 51;
    //scanf("%f", &temp_f);
    float temp_c = (temp_f - 32) * 5 / 9;
    printf("A temperatura %.2f em graus fahrenheit equivale a %.2f graus celcius", temp_f, temp_c);
}