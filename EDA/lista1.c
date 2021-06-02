#include <stdio.h>
#include <stdlib.h>

void max_mim(int vet[], int tam, int *pMim, int *pMax);

int main(int argc, char const *argv[]){
    int tam;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);
    int vet[tam];
    int mim, max;
    max_mim(vet[tam], tam, &mim, &max);
    return 0;
}

void max_mim(int vet[], int tam, int *pMim, int *pMax){
    int i;
    for(i=0;i<tam;i++){
        if(*pMax > vet[i]){
            *pMax = vet[i];
        }else if(*pMim < vet[tam]){
            *pMim = vet[i];
        }
    }
}