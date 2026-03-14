/*código feito 100% por IA (gemini)*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void auto_destruicao() {

    system("clear");
    system("paplay /home/furry_random/Documentos/Codes/AI-without-i/Assets/ativando_bomba.mp3");
    usleep(500000);

    printf("IA: Protocolo de autodestruicao iniciado.\n");
    system("paplay /home/furry_random/Documentos/Codes/AI-without-i/Assets/bomb_planted.mp3");
    usleep(250000);
    
    for (int i = 10; i > 0; i--) {
        printf("%d...\n", i);
        
        // Simula o bip (usando o caractere de escape ou paplay)
        // Se o \a funcionar, use printf("\a"); fflush(stdout);
        system("paplay /home/furry_random/Documentos/Codes/AI-without-i/Assets/bip.mp3"); 
        
        // O tempo de espera diminui conforme chega perto do zero
        usleep(i * 100000); 
    }
    
    printf("IA: Adeus, mundo cruel.\n");
    system("paplay /home/furry_random/Documentos/Codes/AI-without-i/Assets/boom.mp3");
}

int main(){

    auto_destruicao();

    return 0;
}
