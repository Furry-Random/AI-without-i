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

//finge auto-destruição e fecha o programa
void auto_destruicao(){

    clear_terminal();

    system("paplay Assets/ativando_bomba.mp3");
    usleep(500000);

    printf("Auto-destruicao ativada!\n\n");
    system("paplay Assets/bomb_planted.mp3");
    usleep(250000);

    for (int i = 10; i > 1; i--) {

        printf("%d...\n", i);
        system("paplay Assets/bip.mp3");
        usleep(i * 100000);
    }

    printf("1...\n");
    system("paplay Assets/prestes_a_explodir.mp3");

    //imprime uma bomba nuclear
    printf("                             ____\n");
    printf("                     __,-~~/~    `---.\n");
    printf("                   _/_,---(      ,    )\n");
    printf("               __ /        <    /   )  \\___\n");
    printf("- ------===;;;'====------------------===;;;===----- -  -\n");
    printf("                  \\/  ~""~""~""~""~""~\\~""~)~""/"" \n");
    printf("                  (_ (   \\  (     >    \\)\n");
    printf("                   \\_( _ <         >_>'"""" \n");
    printf("                      ~ `-i' ::>|--""""\n");
    printf("                          I;|.|.|\n");
    printf("                         <|i::|i|`.\n");
    printf("                        (` ^'""`-' "")\n");

    system("paplay Assets/boom.mp3");
    clear_terminal();

    exit(0);
}

//exibe um anuncio de acordo com o numero gerado por "n_random_ad()"
void print_ad(int n){

    sleep(1);

    printf("AD: ");
    fflush(stdout);

    switch (n){
    case 1:
        printf("Maes solteiras a 5km de distancia buscam relacionamentos quentes com jovens adultos, voce tem o sulficiente para deixar a rata seca? Clique no banner e saiba mais.\n");
        break;
    
    case 2:
        printf("Voce merece curtir musicas sem limites com o Esportify Premium, clique no banner e saiba mais.\n");
        break;

    case 3:
        printf("Oi meu nome eh Bety, e eu tenho 1 milhao e meio de patrimonio acumulado no gatinho, clique no banner e saiba mais.\n");
        break;

    case 4:
        printf("Viagem de ferias no CC! Viagem para o Triangulo das Bermudas com ate 30 porcento de desconto, viagem com ate 666 acompanhantes para a Garganta do Diabo com ate 66 porcento de desconto! Clique no banner e saiba mais.\n");
        break;

    case 5:
        printf("Hoje, as 19:99, eu irei fazer o maior lancamento do Brasil, que eh o curso do 1 ao milhao, onde eu vou ensinar em 5 dias o metodo para voce sair de um patrimonio de apenas 1 espiga para 1 milhao de sabugos, e as 5 mil primeiras pessoas que adquirirem o curso, terao acesso a plataforma premium, onde elas terao uma experiencia sem anuncios na plataforma, clique no banner e saiba mais.\n");
        break;

    case 6:
        printf("Adiquira chaves de Winderson 10 e escritorio 3000 por apenas 20 conto na 123Mau, clique no banner e saiba mais.\n");
        break;

    case 7:
        printf("Fature 999999999999999999999999999999999999 dinheiros com a bosta_de_cavalo_coin, a moeda do momento, clique no banner e saiba mais.\n");
        break;

    case 8:
        printf("Se voce nao tem um Jaguara le-corsa, uma mulher com 3kg de peito e 7kg de bunda e 3 bilhoes de quanzas na conta, voce eh um frago assado, e se voce quer deixar de ser humilhado por mim, entao clique no link da bio ou no banner e saiba mais.\n");
        break;

    case 9:
        printf("Conte com o cartao que possui a taxa mais alta do mercado, clique no banner e abra sua conta no Zeh Pilantra Bank.\n");
        break;

    case 10:
        printf("Eu estava cheio de dividas, pois o meu antigo emprego de programador nao me pagava bem, e o meu ex chefe ainda ficava o dia inteiro falando para trabalhar no codigo da empresa ao inves dos meus joke-virus, mas agora que eu conheci esse tal de subway money, eu pude deixar o meu chefe falando sozinho, e agora eu pago as contas de casa com apenas 2 horas de jogo por dia, clique no banner e use o meu codigo SOUBROXA69 para ganhar 2 reais de bonus.\n");
        break;
    }
}
