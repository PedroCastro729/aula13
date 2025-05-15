#include <stdio.h>

void triangulo_esquerda(int altura){
    for(int linha = 1; linha <= altura; linha++) {
        for(int coluna = 0; coluna < linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangulo_direita(int altura) {
    for(int linha = 1; linha <= altura; linha++) {
        for(int coluna = 1; coluna <= altura; coluna++) {
            if(coluna <= altura - linha) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
        }
}

int main(void) {
    int numero;
    char letra = 'A';

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(letra != 'F') {
        scanf("%c", &letra);

        switch (letra) {
            case 'A':
                triangulo_esquerda(numero);
                break;
            case 'D':
                triangulo_direita(numero);
                break;
    }
    }

    return 0;
}