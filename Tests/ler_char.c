/*quero ver se consigo ler uma letra com scanf e limpar o buffer bonitinho*/

#include <stdio.h>

int main(){

    char char_1, char_2, char_3;

    printf("Digite uma letra: ");
    scanf(" %c", &char_1);

    setbuf(stdin, NULL);

    printf("Digite mais uma letra: ");
    scanf(" %c", &char_2);

    setbuf(stdin, NULL);

    printf("Digite mais uma letra, denovo: ");
    scanf(" %c", &char_3);

    setbuf(stdin, NULL);

    printf("Letra 1: %c, letra 2: %c, letra 3: %c\n", char_1, char_2, char_3);

    return 0;
}

/*EU CONSEGUI! teste realizado com sucesso!*/
