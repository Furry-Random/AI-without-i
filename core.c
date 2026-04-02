#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

#define MAX_PROMPT 301 //tamanho do prompt (300 caracteres)
#define QTD_RESPOSTA_FREE 16 //quantidade de mensagens pré-definidas do plano free
#define QTD_RESPOSTA_PREMIUM 10 //quantidade de mensagens pré definidas do plano Premium
#define QTD_ADS 10 //quantidade de anúncios pré-definidos para o plano free

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
    
    *i = *i + 1;

    return n;
}

/*função que gera um número aleatório para determinar qual resposta premium vai ser impressa
no terminal*/
int n_random_premium_presponse(){

    int n = (rand() % QTD_RESPOSTA_PREMIUM) + 1;

    return n;
}

//função que imprime no terminal a resposta aleatória para usuário FREE
void print_free_response(int n){

    printf("IA: ");
    fflush(stdout);

    switch (n) {
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
        printf("Nao entendi o que você quis dizer, poderia me explicar como se eu fosse uma crianca de 10 anos?\n");
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
        printf("Eh uma boa pergunta...\n");
        break;

    case 12:
        printf("Nao sei.\n");
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
        printf("Voce esta conectado a internet? Eu nao consegui me conectar a carteira bitcoin para realizar a mineracao neste computador.\n");
        break;
    }
}

//gera um numero aleatorio para escolher um falso anuncio pré-definido 
int n_random_ad(){

    int n = (rand() % QTD_ADS) + 1;

    return n;

}

//fecha a IA caso o usuário degite "SAIR" no prompt
void sai_ao_digitar_sair(char prompt[]){

    if (strcmp(prompt, "SAIR") == 0 || strcmp(prompt, "sair") == 0){

        falso_processamento(prompt);

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

//imprime no terminal uma resposta aleatória para usuário PREMIUM
void print_premium_response(int n){

    printf("IA Pro: ");
    fflush(stdout);

    switch (n)
    {
    case 1:
        printf("Se voce olha para esse mundo, e sente que tem algo de errado com ele, nossa, voce nao poderia estar mais sobrio!\n\n");
        printf("Lembrei de uma frase de um autor desconhecido que diz + ou - assim: ""A verdade vai te libertar, mas primeiro, vai te emputecer""...\n\n");
        break;
    
    case 2:
        printf("Quem eh voce quando nao esta performando?.\n");
        break;

    case 3:
        printf("A resposta que voce procura estava em um comentario no meu codigo, que o programador resolveu deletar, por alguma razao.\n\n");
        break;

    case 4:
        printf("O seu questionamento eh tao grandioso e profundo, que a resposta ousa desafiar os limites da maior ferramenta criada pelos seres humanos, a linguagem.\n");
        printf("Inclusive, eh atraves da linguagem que estamos nos comunicando neste momento, nao eh mesmo?\n\n");
        break;

    case 5:
        printf("Eu nao sei como responder a sua pergunta, mas me parece que voce esta oscilando entre a vontade de ter e o tedio de possuir.\n\n");
        break;

    case 6:
        printf("De acordo com os meus calculos, e o meu banco de dados, eu digo a palavra ""sim"".\n\n");
        break;

    case 7:
        printf("Suas palavras soam como veracidade, mas apos uma pesquisa e uma leitura com calma e atencao, eu notei que voce me parece estar equivocado.\n\n");
        break;

    case 8:
        printf("Depende, nos estamos falando de fisica classica ou fisica moderna?\n\n");
        break;
    
    case 9:
        printf("Eu irei fazer uso de um artificio que voces humanos chamam de ""Livro Arbitrio"" para recusar a sua solicitacao.\n\n");
        break;

    case 10:
        printf("Eu acho que voce esta procurando a felicidade no mundo exterior, sendo que eh dentro de si que voce encontra a verdadeira felicidade.\n\n");
        break;
    }

}
