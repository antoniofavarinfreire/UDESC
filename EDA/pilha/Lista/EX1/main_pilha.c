#include <stdio.h>
#include <stdlib.h>
#include"pilha.h"

int main(int argc, char const *argv[]){
    Pilha p;
    int quantidade;
    printf("Qual o tamanho da pilha:");
    scanf ("%d",&quantidade);
    cria_pilha(&p,quantidade);
    
    
    return 0;
}
