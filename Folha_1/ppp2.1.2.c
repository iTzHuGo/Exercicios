#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int num = 0;
    if (num < num1)
        num = num1;
    if (num < num2)
        num = num2;
    if (num < num3)
        num = num3;
    printf("%d", num);
}