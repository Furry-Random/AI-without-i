#ifndef AIWI_H
#define AIWI_H

//função que pede um "prompt" pro usuário, puro fingimento
void usr_input(char str[]);

//função que limpa o terminal dependendo do sistema operacional
void clear_terminal();

//função que sorteia e retorna um número aleatório
int n_random_response(int *i, bool usr_free);

//imprime uma saudacao dependendo do valor de n (dado_saud)
void print_saudacao(int n);

//função que imprime no terminal a resposta aleatória definida por "n_random_response(int *dado);"
void print_response(int dado_r);

//funcao que trava o usuário em uma tela de "assinatura de plano premium"
void ia_premium_ad();

//falso checkout
bool falso_checkout();

//finge que o prompt está sendo processado
void falso_processamento(char str[]);

//finge que a IA está se conectando ao servidor
void falsa_conexao();

#endif
