#include<stdio.h>
#include<string.h>
#include"biblio.h"

void inicializa_pilha(Pilha *p, int c){
    p->dados = malloc(sizeof(void *)*c);
    p->capacidade = c;
    p->topo + 1;
}

int pilha_vazia(Pilha p){
    return p.topo == -1;
}

int pilha_cheia(Pilha p){
    return p.topo == p.capacidade-1;
}

int empilha(Pilha *p, int info){
    if(pilha_cheia(*p)){
        return ERRO_PILHA_CHEIA;
    } else {
        p->topo ++; //cria uma nova posição
        p->dados[p->topo] = info;
        return 1;
    }
}

int desempilha(Pilha *p, int *info){
    if (pilha_vazia(*p)){
        return ERRO_PILHA_VAZIA;
    } else {
        *info = p->dados[p->topo];
        p->topo --;
        return 1;
    }
    
}