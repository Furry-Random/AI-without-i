#ifndef AIWI_H
#define AIWI_H

//função que pede um "prompt" pro usuário, puro fingimento
void usr_input();

//função que limpa o terminal dependendo do sistema operacional
void clear_terminal();

//função que sorteia e retorna um número aleatório
void n_random_response(int *dado_r, int *i);

//função que imprime no terminal a resposta aleatória definida por "n_random_response(int *dado);"
void print_response(int dado_r);

//função que fecha o programa
void close_ia();

//funcao que trava o usuário em uma tela de "assinatura de plano premium"
void ia_premium_ad();

#endif