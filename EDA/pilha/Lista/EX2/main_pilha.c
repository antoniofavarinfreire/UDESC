#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

int main(int argc, char const *argv[]){
    PilhaBinario p;
    int quantidade,binario;
    printf ("Qual o tamanho da pilha ?\n");
    scanf("%d", &quantidade);
    printf("Qual o numero que deseja traduzir ? \n");
    scanf("%d",&binario);
    do{
        int resto = binario % 2;
        empilha(p,resto);
        binario / 2;
    }while (binario > 0);
    
    while (testa_cheia(p)){
        int temporario;
        desempilha(p,&temporario);
    }
    printf("\n");

       
    return 0;
}
