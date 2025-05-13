#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[11];
    int palindromo = 1;

    printf("Digite uma palavra de até 10 letras: ");
    scanf("%10s", palavra);

    int tamanho = strlen(palavra);
    int metade = tamanho / 2;
    int fim = tamanho - 1;

    for(int i = 0; i < metade; i++) {
        if(palavra[i] != palavra[fim]) {
            palindromo = 0;
            break;
            }
        fim--;
    }

    if(palindromo) {
        printf("Resultado: é um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é!\n");
    }

    return 0;
}