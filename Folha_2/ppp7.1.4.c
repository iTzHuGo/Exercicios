#include <stdio.h>
#include <ctype.h>
#include <string.h>
//7.1.4

int main() {
    char string[50];
    int i = 0;
    fgets(string, 51, stdin);
    while (i < strlen(string)) {
        if (!isspace(string[i])) {
            printf("%c", string[i]);
            i++;
        }
        else i++;
    }
}