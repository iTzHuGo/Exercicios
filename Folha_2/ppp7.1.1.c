#include <stdio.h>

int main(void) {
    char string[61];
    int i = 0;
    do {
        string[i] = (char) getchar();
        i++;
    } while(i < 60 && string[i] != '\n');
    string[i] = 0;
    puts(string);
    i = 0;
    do {
        string[i] = (char) getchar();
        i++;
    } while(i < 60 && string[i] != '\n');
    string[i] = 0;
    puts(string);
}