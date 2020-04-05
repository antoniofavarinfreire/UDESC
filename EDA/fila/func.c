#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

void cria(Fila *p, int capacidade){
    p->dados = malloc(sizeof(int *)*capacidade);
    p->capacidade = capacidade;
    p->inicio = 0;
    p->fim =0;
    p->n_elementos = 0;
}

int fila_vazia(Fila p){
    return p.n_elementos == 0;
}

int fila_cheia (Fila p){
    return p.n_elementos == p.capacidade;
}

int insere(Fila *p, int info){
    if(fila_cheia(*p)){
        return ERRO_FILA_CHEIA;
    }
    p->n_elementos ++;
    p->dados[p->fim] = info;
    p->fim = p->fim + 1;
    
}

int romeve(Fila *p, int *info){
    
    if(fila_vazia(*p)){
        return ERRO_FILA_VAZIA;
    }
    p->n_elementos --;
    *info = p->dados[p->inicio];
    p->inicio = (p->inicio + 1) % p->capacidade;
    return 1;
}

void mostra_fila(Fila f){
    if(fila_vazia(f)){
        printf("Fila vazia !");
    }else {
        int i;
        printf("Dados da fila:\n");
        if(f.inicio<f.fim){
            for(i=f.inicio ; i<f.fim ; i++){
                printf("%d\n",f.dados[i]);
            }
        } else {
            for(i=f.inicio ; i<f.capacidade ; i++){
                printf("%d\n",f.dados[i]);
            }
            for(i=0 ; i<f.fim ; i++){
                printf("%d\n",f.dados[i]);
            }
        }
    }
}