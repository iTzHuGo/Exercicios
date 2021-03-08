#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    /*1. The function rand returns a random number.(Go figure)
      2. The '%' actually gets the remainder of a number divided by another number:
      5 % 1 = 0 5 % 5 = 0
      5 % 2 = 1 6 % 5 = 1
      5 % 3 = 2 7 % 5 = 2
      5 % 4 = 1 8 % 5 = 3
      5 % 5 = 0 9 % 5 = 4
      3. When you put the '6' in after the '%' then you will get a random number from 0 to 5
      4. The 1 shifts it to numbers from 1 to 6*/
    int num1, num2;
    srand(time(0));
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    int dif = num1 - num2;
    printf("num1 = %d; num2 = %d; dif = %d\n", num1, num2, dif);
    if (dif < 2)
        printf("É inferior a 2 e a 4.\n");
    else if (dif == 3)
        printf("É inferior a 4.");
    else if (dif > 3)
        printf("É superior a 3");
}