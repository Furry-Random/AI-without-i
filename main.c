#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

#define MAX_PROMPT 301  //tamanho do prompt (300 caracteres)
#define MAX_SAUDACAO 6  //quantidade de saudacoes que o programa tem
#define MAX_MSG 9 //limite máximo de mensagens no plano free

int main(){
    
    //variáveis
    int dado_r;              //armazena um numero aleatorio, para selecionar uma resposta pré-definida
    int cont_msg = 0;        //armazena a qauntidade de mensagens enviadas a IA
    char prompt[MAX_PROMPT]; //armazena o prompt do usuário
    bool usr_free = true;    /*diz se o usuário está usando o "plano gratuíto" ou o "plano premium"
    sempre começa com o plano free*/
    int n_ad; //armazena o número aleatório para escolher um anuncio aleatorio

    //ajustes
    srand(time(NULL));       //seta uma semente para gerar os números aleatórios
    clear_terminal();        //deixa o terminal limpinho pra usar o software
    
    //finge que está se conectando ao servidor
    falsa_conexao();

    //exibe a saudação
    int dado_saud = (rand() % MAX_SAUDACAO) + 1;
    print_saudacao(dado_saud);
    sleep(1);
    printf("Dica: digite ""SAIR"" no prompt para encerrar a IA\n\n");
    sleep(1);

    while (true) {

        usr_input(prompt); //o usuário digita um prompt
        sai_ao_digitar_sair(prompt);
        
        if (cont_msg >= MAX_MSG && usr_free) {
            
            ia_premium_ad();
            sleep(10);
            usr_free = falso_checkout();
            clear_terminal();

            //finge que está conectando ao servidor, reiniou a IA
            falsa_conexao();

            //exibe a saudaçao novamente
            dado_saud = (rand() % MAX_SAUDACAO) + 1;
            print_saudacao(dado_saud);
            sleep(1);
            printf("Dica: digite ""SAIR"" no prompt para encerrar a IA\n\n");
            sleep(1);

            usr_input(prompt);
            sai_ao_digitar_sair(prompt);
        }

        falso_processamento(prompt);
        dado_r = n_random_free_response(&cont_msg, usr_free); //a IA gera um número aleatório
        print_free_response(dado_r);                          //O programa imprime uma resposta pré-definida selecionada aleatoriamente

        //exibe um anuncio, caso o usuário seja free
        if (usr_free) {

            n_ad = n_random_ad();
            print_ad(n_ad);
        }
    }
    
    return 0;
}
