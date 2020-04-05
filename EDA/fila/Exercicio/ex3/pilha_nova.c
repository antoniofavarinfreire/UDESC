#include<stdio.h>
#include<stdlib.h>
#include"fila.h"

void cria_fila(Fila_nova *p, int capacidade){
    inicializa_pilha(&p->p1,capacidade);
    inicializa_pilha(&p->p2,capacidade);
}

int fila_vazia(Fila_nova f){
    return pilha_vazia(f.p1) && pilha_vazia(f.p2) ;
}

int fila_cheia(Fila_nova f){
    return pilha_cheia(f.p1) || pilha_cheia(f.p2);
}

int inserir(Fila_nova *p, int info){
    
}