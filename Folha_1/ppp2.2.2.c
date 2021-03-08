#include <stdio.h>

int main() {
    int hora, min, new_hora;
    printf("Insira as horas no formato hh:mm.\n");
    scanf("%d:%d", &hora, &min);
    if (hora > 12) {
        new_hora = hora - 12;
        printf("%d:%d pm", new_hora, min);
    }
    else printf("%d:%d am", hora, min);
}