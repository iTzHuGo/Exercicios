#include <stdio.h>
//7.1.1
int conta_palavras(const char *s);

int main(void) {
    char string[61];
    fgets(string, 61, stdin);
    puts(string);
    printf("Nº de palavras = %d\n", conta_palavras(string));
}

int conta_palavras(const char *s) {
    int num = 0;
    char ant = ' ';
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == ' ' || s[i] == '\n') {
            if (ant != ' ')
                num++;
        }
        ant = s[i];
    }
    return num;
}