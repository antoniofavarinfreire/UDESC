#include<stdio.h>
#include<string.h>
#include"biblio.h"

void criaPilha (Pilha *p, int c){
   p->dados = malloc(sizeof(void*)*c);
   p->capacidade = c;
   p->topo = -1;
}

int pilhaVazia (Pilha p){
    return p.topo == -1;
}

int pilhaCheia(Pilha p){
    return p.topo == max-1;
}

int empilha(Pilha *p, int info){
    if(pilhaCheia(*p)){

        return ERRO_PILHA_CHEIA;  

    }else{
        p->topo ++;
        p->dados[p->topo] = info;
        return 1;
    }
    
}

int desempilha(Pilha*p, int *info){
    if(pilhaVazia(*p)){
        ERRO_PILHA_VAZIA;
    }else {
        p -> topo --;
        return p -> dados [p->topo+1]; //posição adicionada.
    }
}

int mostraPilha(Pilha p){
    if(pilhaVazia(p)){
        printf("Pilha vazia!\n");
    } else {
        printf("Dados da Pilha:\n");
        int i;
        for(i=0;i<p.topo;i++){
            printf("%d",p.dados[i]);
        }
    }
}