#include <stdio.h>
#include "lista-duplamente-ligada.h"

int main(void) {
    struct base lista;
    inicializar(&lista);

    struct mensagem mens1 = {"Rua do Moinho, Belmonte",
                             "Rua do Castro, Coimbra",
                             "Desejo-vos um confinamento muito agradável. Abraços, Manuel Francisco"};
    struct mensagem mens2 = {"Rua do Moinho, Coimbra",
                             "Rua do Castro, Coimbra",
                             "Desejo-vos um confinamento muito agradável. Abraços, Manuel Francisco"};
    struct mensagem mens3 = {"Rua do Moinho, Viseu",
                             "Rua do Castro, Coimbra",
                             "Desejo-vos um confinamento muito agradável. Abraços, Manuel Francisco"};
    if (!colocar(&lista,mens2)) {
        printf("erro na colocação 2\n");
    }
    if (!colocar(&lista,mens1)) {
        printf("erro na colocação 1\n");
    }
    if (!colocar(&lista,mens3)) {
        printf("erro na colocação 3\n");
    }
    struct mensagem mens4;
    while(retirar(&lista,&mens4))
        printf("destino: %s\n",mens4.destino);
    return 0;
}
