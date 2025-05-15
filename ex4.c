#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int linha = 1; linha <= numero; linha++) {
        for(int coluna = 0; coluna < linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}