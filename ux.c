#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

//funcao que trava o usuário em uma tela de "assinatura de plano premium"
void ia_premium_ad(){

    bool usr_free = true;

    if (usr_free) {

        clear_terminal();

        printf("Curta a inteligência artificial sem parar, com o plano IA premium!\n\n");

        sleep(5);

        printf("         ___________________________________________\n");
        printf("         |    Beneficios   | IA Free  | IA Premium |\n");
        printf("         |-----------------|----------|------------|\n");
        printf("         |   Use Offline   |    --    |     S      |\n");
        printf("         | Sem interupcoes |    --    |     S      |\n");
        printf("         |   Sem Anuncios  |    --    |     S      |\n");
        printf("         |-----------------------------------------|\n\n");

        sleep(10);
        close_ia();

        /* (pode ser ativado caso o usuário mande 10 mensagens, e pode tocar
        a música de anúncio do spotify pra entrar no clima)*/

        /*falta adicionar mais coisas, n consigo pensar noq agr*/
    }
}