#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pilha.h"


int main(int argc, char const *argv[]){
    Pilha p1;
    int capacidade;
    scanf("%d",&capacidade);
    cria_pilha(&p1,capacidade);
    int info;
    scanf("%d",&info);
    
    return 0;
}
