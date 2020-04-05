#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dupla.h"

int vazia(Lista l){
    return l.head == NULL;
} 

void cria_lista(Lista *l, int info){
    l->head = NULL;
    l->quant = 0;
    l->taminfo = info;
}

int insere_inicio(Lista *l, void *info){
    Elemento *p = malloc(sizeof(Elemento));
    if (p == NULL){
        return 0;
    }
    p->info = malloc (l->taminfo);
    
    if(p->info == NULL){
        free(p);
        return 0;
    }
    memcpy(p->info, info, l->taminfo);
    p->prox = l->head;
    p->ant = NULL;
    if (p->prox != NULL){
        p->prox->ant = p;
    }
    l->head = p;
    return 1
    
}

void mostra_lista(Lista l, void (*mostraInfo)(void*)){
    if(vazia(l)){
        printf("lista vazia!\n");
    }else {
        printf("Dados da lista:\n");
        Elemento *p = l.head;
        while (p != NULL){
            mostraInfo(p->info); //callback
            p = p->prox;
        }
        
    }
}