#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dupla.h"

int vazia(Lista l){
    return l.quant == 0;
} 

void cria_lista(Lista *l, int info){
    l->head = NULL;
    l->taminfo = info;
    l->quant = 0;
}

void cria_conjunto(Lista *l, int conjunto){
    if (l->head == NULL){
        cria_lista(l,sizeof(conjunto));
        printf("feito\n");
        
    }
    printf("opa\n");
    
}

int insere_inicio(Lista *l, void *info){
    Elemento *p = malloc(sizeof(Elemento));
    if(p==NULL){
        free(p);
    }
    memcpy(p->info,info,l->taminfo);
    p->prox = l->head;
    l->head->ant = p;
    l->head = p;
    l->quant ++; 
    return 1;
}

