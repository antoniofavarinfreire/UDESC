#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

void inicializa_lista(Lista *l, int info){
    l->head = NULL;
    l->quantidade = 0;
    l->taminfo = info;
}

int insere_inicio(Lista *l, void *info){
    Elemento *p = malloc(sizeof(Elemento));
    if(p==NULL){
        free(p);
    }
    memcpy(p->info, info,l->taminfo);
    p->prox = l->head;
    l->head = p;
    l->quantidade ++;
    return 1;
}

int remove_inicio(Lista *l, void *info){
    if(lista_vazia(*l)){
        return ERRO;
    }
    Elemento *p = l->head;
    memcpy (info,p->info,l->taminfo);
    l->head = p->prox;
    free(p->info);
    free(p);
    l->quantidade --;
    return 1;
}

int insere_fim(Lista *l, void *info){

}

int removeDaPos(Lista *l,void *info,int pos){
    if(lista_vazia(*l))
        return ERRO_LISTA_VAZIA;
    if(pos<0 || pos>= L->quantidade){
        return ERRO_LISTA_VAZIA;
    }
    if (pos == 0){
        return remove_inicio(l,info);
    }
    Elemento *p = p = l-> head;
    int cont;
    for (cont = 0 ; cont < pos - 1 ; cont ++){
        p = p -> prox;
    }
    Elemento *x = p-> prox;
    p -> prox = x -> prox;
    memcpy (info,x->info,l->taminfo);
    free (x->info);
    free(x);
    l->quantidade --;
    return 1;
}