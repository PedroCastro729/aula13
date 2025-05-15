#include <stdio.h>
#include <string.h>

void ordena(char palavra[]) {
    int tamanho = strlen(palavra);
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho - 1; j++) {
            if(palavra[j] > palavra[j+1]) {
                char maior = palavra[j];
                palavra[j] = palavra[j+1];
                palavra[j+1] = maior;
            
            }
        }
    }
}

int main(void) {
    char palavra1[100];
    char palavra2[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%99s", palavra2);

    ordena(palavra1);
    ordena(palavra2);

    if(strcmp(palavra1, palavra2) == 0) {
        printf("As palavras são anagramas!\n");
    } else {
        printf("As palavras NÃO são anagramas!\n");
    }

    return 0;
}