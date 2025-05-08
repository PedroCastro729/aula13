#include <stdio.h>

int main(void) {
    int maior;

int vetor[5] = {9, 7, 3, 6, 8};

    for(int p = 0; p < 5; p++) {
        printf("Antes: %d ", vetor[p]);
    }
    printf("\n");

    for(int p = 0; p < 4; p++) {
        for(int i = 0; i < 4; i++) {
            if( vetor[i] > vetor[i+1] ) {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
        }
    }
    for(int p = 0; p < 5; p++) {
        printf("Depois: %d ", vetor[p]);
    }
    printf("\n");
    
    return 0;
}