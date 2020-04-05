#include <stdio.h>
#include <stdlib.h>
#include"pilha.h"

void cria_pilha(Pilha *p, int capacidade){
    p -> dados = malloc(sizeof(void*)*capacidade);
    p -> capacidade = capacidade;
    p -> topo1 = -1;
    p -> topo2 = capacidade;
}

int testa1_vazia(Pilha p){
    return p.topo1 == -1;
}

int testa2_vazia(Pilha p){
    return p.topo2 == p -> capacidade;
}

int testa_cheia(Pilha p){
    return p.topo == p.capacidade -1;
}

int empilha(Pilha *p, int info){
    if (testa_cheia(*p)){
        return ERRO_PILHA_CHEIA;
    }else {
        p->topo ++;
        p->dados[p->topo] = info;
        return 1;        
    }
    
}