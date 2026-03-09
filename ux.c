#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

//função que limpa o terminal dependendo do sistema operacional
void clear_terminal(){

    #ifdef __linux__
        system("clear");

    #elif _WIN32
        system("cls");

    #endif
}

//finge que a IA está se conectando ao servidor
void falsa_conexao(){

    sleep(3);

    printf("Conectando ao servidor");
    fflush(stdout);
    for (int i = 0; i < 3; i++) {

        sleep(1);
        printf(".");
        fflush(stdout);
    }
    printf("\n");

    sleep(2);
    printf("Conectado com sucesso!\n");

    sleep(2);
    printf("Validando chave de API");
    fflush(stdout);
    for (int i = 0; i < 5; i++) {

        sleep(1);
        printf(".");
        fflush(stdout);
    }
    printf("\n");

    sleep(3);
    printf("Chave validada com sucesso!\n");
    sleep(3);

    printf("Bem-vindo, User!\n");
    sleep(2);

    clear_terminal();
}

//imprime uma saudacao dependendo do valor de n (dado_saud)
void print_saudacao(int n){

    switch (n) {
    case 1:
        printf("Ola, como posso te ajudar hoje?\n\n");
        break;
    
    case 2:
        printf("No que vamos trabalhar hoje?\n\n");
        break;

    case 3:
        printf("Estou pronta! E voce?\n\n");
        break;

    case 4:
        printf("O que voce tem em mente?\n\n");
        break;

    case 5:
        printf("Qual e o projeto de hoje?\n\n");
        break;

    case 6:
        printf("Iniciaremos quando voce quiser, no seu tempo.\n\n");
        break;
    }
}

//funcao que trava o usuário em uma tela de "assinatura de plano premium"
void ia_premium_ad(){

    clear_terminal();

    printf("Curta a inteligência artificial sem parar, com o plano IA premium!\n\n");

    sleep(5);

    printf("Veja abaixo os benefícios:\n");
    printf("___________________________________________\n");
    printf("|    Beneficios   | IA Free  | IA Premium |\n");
    printf("|-----------------|----------|------------|\n");
    printf("|    IA Culta     |    --    |     S      |\n");
    printf("| Sem interupcoes |    --    |     S      |\n");
    printf("|   Sem Anuncios  |    --    |     S      |\n");
    printf("|-----------------------------------------|\n\n");

    /* (pode ser ativado caso o usuário mande 10 mensagens, e pode tocar
    a música de anúncio do spotify pra entrar no clima)*/

}

//falso checkout, torna o usuário premium caso ele assine o plano
bool falso_checkout(){

    setbuf(stdin, NULL);
    int op;

    printf("Voce quer aproveitar os beneficios com uma assinatura Premium?\n\n");
    printf("[1] - Sim, eu quero!\n");
    printf("[2] - Prefiro perder os beneficios\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &op);
    setbuf(stdin, NULL);

    if (op == 1) {

        clear_terminal();

        sleep(3);
        printf("Conectando API de pagamento");
        fflush(stdout);
        for (int i = 0; i < 7; i++) {

            sleep(1);
            printf(".");
            fflush(stdout);
        }
        printf("\n");

        printf("API conectada com sucesso!\n");
        sleep(2);

        printf("Realizando request de assinatura");
        fflush(stdout);
        for (int i = 0; i < 5; i++) {

            sleep(1);
            printf(".");
            fflush(stdout);
        }
        printf("\n");
        
        printf("Request aceita!\n");
        sleep(1);

        printf("Aguardando autorizacao bancaria");
        fflush(stdout);
        for (int i = 0; i < 7; i++) {

            sleep(1);
            printf(".");
            fflush(stdout);
        }
        printf("\n");

        printf("Autorizacao aprovada!\n");
        sleep(1);

        printf("Assinatura Premium realizada com sucesso!\n");
        sleep(2);

        printf("Aproveite a IA sem limites!\n");
        sleep(5);

        printf("COMPRA APROVADA NO VALOR DE RS 3.799,90 NO CARTAO MASTERCARD\n");
        sleep(2);

        return false; //o usuário não é mais free, agora é premium!
    } else {

        clear_terminal();
        sleep(2);

        printf("Desconectando");
        fflush(stdout);

        for (int i = 0; i < 5; i++) {

            sleep(1);
            printf(".");
            fflush(stdout);
        }

        clear_terminal();
        exit(0);
    }
}

//finge que o prompt está sendo processado
void falso_processamento(char str[]){

    int delay_prompt = (int) ((strlen(str) * 0.05) + (rand() % 5) + 2);

    sleep(2);
    printf("Processando");
    fflush(stdout);
    sleep(1);

    for (int i = 0; i < delay_prompt; i++) {

        printf(".");
        fflush(stdout);
        sleep(1);
    }

    printf("\n");
}
