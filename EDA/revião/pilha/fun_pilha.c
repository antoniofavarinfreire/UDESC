#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pilha.h"

void cria_pilha(Pilha *p, int c){
    p->dados = malloc(sizeof(void*)*c);
    p->topo1 = -1;
    p->topo2 = c - 1;
    p->capacidade = c;
}

int testa_vazia(Pilha p){
    return p.topo1 == -1;
}

int testa_vazia2(Pilha p){
    return p.topo2 == p.capacidade - 1; 
}

int testa_cheia(Pilha p){
    return p.topo1 == p.capacidade - 1;
}

int insere_p1(Pilha *p,int info){
    if (testa_cheia(*p)){
        return ERRO_PILHA_CHEIA;
    }else{
        p->topo1 ++;
        p->topo2 --;
        p->dados[p->topo1] = info;
        return 1;
    }
    
    
}

int insere_p2(Pilha *p, int info){
    if(testa_cheia(*p)){
        return ERRO_PILHA_CHEIA;
    }else{
        p->topo2  ++;
        p->dados[p->topo2] = info;
        return 1;
    }
}