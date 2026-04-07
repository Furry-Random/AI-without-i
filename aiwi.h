#ifndef AIWI_H
#define AIWI_H

//função que pede um "prompt" pro usuário, puro fingimento
void usr_input(char str[]);

//função que limpa o terminal dependendo do sistema operacional
void clear_terminal();

/*função que sorteia um número aleatório para selecionar uma das respostas pré-definidas
para usuário FREE*/
int n_random_free_response(int *i, bool usr_free);

/*função que gera um número aleatório para determinar qual resposta premium vai ser impressa
no terminal*/
int n_random_premium_presponse();

//imprime uma saudacao dependendo do valor de n (dado_saud)
void print_saudacao(int n);

//função que imprime no terminal uma resposta aleatória para usuário FREE
void print_free_response(int n);

//imprime no terminal uma resposta aleatória para usuário PREMIUM
void print_premium_response(int n);

//funcao que trava o usuário em uma tela de "assinatura de plano premium"
void ia_premium_ad();

//falso checkout
bool falso_checkout();

//finge que o prompt está sendo processado
void falso_processamento(char str[]);

//finge que a IA está se conectando ao servidor
void falsa_conexao();

//finge auto-destruição e fecha o programa
void auto_destruicao();

//gera um numero aleatorio para escolher um falso anuncio pré-definido 
int n_random_ad();

//exibe um anuncio de acordo com o numero gerado por "n_random_ad()"
void print_ad(int n);

//fecha a IA caso o usuário degite "SAIR" no prompt
void sai_ao_digitar_sair(char prompt[]);

//executa um "pequeno teatro", para fingir que a IA funciona de verdade, retorna false
bool pequeno_teatro(char prompt[]);

#endif
