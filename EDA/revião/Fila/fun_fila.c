#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"bibliotecaFila.h"

void cria(Fila *f, int dado){
    f->dado = malloc(sizeof(void*)*dado);
    f->Nelementos = 0;
    f->inicio = 0;
    f->fim = 0;
    f->capacidade = dado;
}

int filaVazia(Fila f){
    return f.Nelementos == 0;
}

int filaCheia(Fila f){
    return f.Nelementos == MAX - 1; 
}

int insereInicio(Fila *f, int dado){
    if(filaCheia(*f)){
        return ERRO_FILA_CHEIA;
    }
    f->Nelementos ++;
    f->dado[f->fim] = dado;
    f->fim = f->fim + 1;
}

int insereFim(Fila *f, int dado){
    if(filaCheia(*f)){
        return ERRO_FILA_CHEIA;
    }
    f->Nelementos ++;
    f->dado[f->inicio] = dado;
    f->inicio = f->inicio - 1;
}

int remove(Fila *f, int *dado){
    if(filaVazia(*f)){
        return ERRPO_FILA_VAZIA;
    }
    f->Nelementos --;
    *dado = f->dado[f->inicio];
    f->inicio = (f->inicio) % f->capacidade;
    return 1;
}

void mostra(Fila f){
    if (filaVazia(f)){
        printf("Erro, Fila vazia!!");
    }
    if(f.inicio<f.fim){
        
    }
    
}