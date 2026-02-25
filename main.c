#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "aiwi.h"

#define MAX_PROMPT 301  //tamanho do prompt (300 caracteres)

int main(){

    int dado_r;              //armazena um numero aleatorio, para selecionar uma resposta pré-definida
    int cont_msg = 0;        //armazena a qauntidade de mensagens enviadas a IA
    char prompt[MAX_PROMPT]; //armazena o prompt do usuário

    srand(time(NULL));       //seta uma semente para gerar os números aleatórios
    clear_terminal();        //deixa o terminal limpinho pra usar o software
    
    //                                               //funcionamento:
    while (true) {
        usr_input(prompt);                           //o usuário digita um prompt
        n_random_response(&dado_r, &cont_msg);       //a IA gera um número aleatório
        print_response(dado_r);                      //O programa imprime uma resposta pré-definida selecionada aleatoriamente
    }
    
    return 0;
}