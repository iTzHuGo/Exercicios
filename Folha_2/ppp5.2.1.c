/* print Fahrenheit-Celsius table; version with if */
#include <stdio.h>
#define true 1
#define false 0
int main(){
    float fahr, celsius;
    int lower, upper, step;
    float *pfahr = & fahr;
    float *pcelsius = &celsius;
    int * plower = & lower;
    int * pupper = & upper;
    int * pstep = & step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = (float) *plower;
    while( true ){
        *pcelsius = (5.0f/9.0f) * (*pfahr-32);
        printf("%3.0f %6.1f\n", *pfahr, *pcelsius);
        *pfahr += (float) *pstep;
        if (*pfahr > (float) *pupper)
            break;
    }
    return 0;
}