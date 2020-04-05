#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

void cira_PilhaBin(PilhaBinario *p, int capacidade){
    p->dado = malloc(sizeof(void *) * capacidade);
    p->capacidade = capacidade;
    p->topo = -1;
}

int testa_vazia(PilhaBinario p){
    return p.topo == -1;
}

int testa_cheia(PilhaBinario p){
    return p.topo == p.capacidade -1;
}

int empilha(PilhaBinario *p, int info){
    if(testa_cheia(*p)){
        return ERRO_PILHA_CHEIA;
    }else {
        p->topo ++;
        p->dado [p->topo] = info;
        return 1;
    }
}

int desempilha(PilhaBinario *p, int *info){
    if(testa_vazia(*p)){
        return ERRO_PILHA_VAZIA;
    }else {
        info = p->dado[p->topo];
        p->topo --;
        return 1;
    }
}

