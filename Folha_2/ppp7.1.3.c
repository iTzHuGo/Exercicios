#include <stdio.h>
//7.1.3
int main(void) {
    char string[61];
    scanf("%60[^\n]", string);
    for (int i = 0; string[i] != 0 ; i++)
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - ('a'- 'A');
    puts(string);
}