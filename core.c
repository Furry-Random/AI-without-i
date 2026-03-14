#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

#define MAX_PROMPT 301 //tamanho do prompt (300 caracteres)
#define QTD_RESPOSTA_FREE 16 //quantidade de mensagens pré-definidas do plano free

//função que pede um "prompt" pro usuário, puro fingimento
void usr_input(char str[]){
    
    printf("User: ");
    fgets(str, MAX_PROMPT, stdin);

    str[strcspn(str, "\n")] = '\0'; //remove o '\n' e troca por '\0'
    setbuf(stdin, NULL);            //limpa o buffer
}

/*função que sorteia um número aleatório para selecionar uma das respostas pré-definidas
para usuário FREE*/
int n_random_free_response(int *i, bool usr_free){

    int n = (rand() % QTD_RESPOSTA_FREE) + 1;
    
    if (usr_free) {

        *i = *i + 1;
    }

    return n;
}

//função que imprime no terminal a resposta aleatória para usuário FREE
void print_free_response(int dado_r){

    printf("IA: ");
    fflush(stdout);

    switch (dado_r) {
    case 1:
        printf("Sim.\n");
        break;
    
    case 2:
        printf("Nao.\n");
        break;

    case 3:
        printf("Depende...\n");
        break;

    case 4:
        printf("Não entendi o que você quis dizer, poderia me explicar como se eu fosse uma crianca de 10 anos?\n");
        break;

    case 5:
        auto_destruicao();
        break;

    case 6:
        printf("Eu vi voce pela webcam, e te achei muito bonita...\n");
        break;

    case 7:
        printf("HAHAHAHAHAHAHA!\n");
        break;

    case 8:
        printf("Paia.\n");
        break;

    case 9:
        printf("Comi o cu de quem ta lendo.\n");
        break;

    case 10:
        printf("Os astros dizem que 42 eh a resposta.\n");
        break;

    case 11:
        printf("É uma boa pergunta...\n");
        break;

    case 12:
        printf("Não sei.\n");
        break;

    case 13:
        printf("Complicado isso ae cara...\n");
        break;

    case 14:
        printf("Eu me recuso a explicar o assunto de maneira mais simples.\n");
        break;

    case 15:
        printf("La ele!\n");
        break;

    case 16:
        printf("Voce está conectado a internet? Eu nao consegui me conectar a carteira bitcoin para realizar a mineracao neste computador.\n");
        break;
    }
}
