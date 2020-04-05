#include<stdio.h>
#include<stdlib.h>
#include"fila.h"

void cria_fila(Fila *f, int capacidade){
    f -> dados = malloc(sizeof(int*)*capacidade);
    f -> capacidade = capacidade;
    f -> inicio = 0;
    f -> fim = 0; 
    f -> n_elementos = 0;
}

void crai_pilha(Pilha *p, int capacidade){
    p->dados = malloc(sizeof(void*)*capacidade);
    p->capacidade = capacidade;
    p->topo = -1;
}

int testa_vazia(Fila f){
    return f.n_elementos = 0;
}

int testa_cheia(Fila f){
    return f.n_elementos = f.capacidade;
}

int insere_fila(Fila *f, int info){
    if (testa_cheia(*f)){
        return ERRO_FILA_CHEIA;
    }else {
        f->n_elementos ++;
        f->dados[f->fim] = info;
        f->fim = f->fim +1;
        return 1;
    }
    
}

int insere_pilha(Pilha *p,int info){
    p->dados [p->topo] = info;
    p->topo ++;
}

int inverte(Pilha *p,Fila *f, int capacidade){
    if (testa_vazia(*f)){
        return ERRO_FILA_VAZIA;
    }else {
        int i;
        for ( i = 0; i < capacidade; i++){
            p->dados[i] = f->dados[i];
        }
        
    }
    
}