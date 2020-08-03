#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

struct descLSE *cria(int taminfo){
    struct descLSE *desc = (struct descLSE*) malloc(sizeof(struct descLSE));

    if(desc != NULL){
        desc -> inicio = NULL;
        desc -> taminfo = taminfo;
    }
    return desc;
}

int tamanhoDalista(struct descLSE *desc){
    int tam = 0;
    struct noLSE *aux = desc -> inicio;
    
    while (aux != NULL){
        aux = aux -> prox;
        tam ++;    
    }

    return tam;
    
}

int insereInicio(Alunos *reg, struct descLSE *desc){
    
    struct noLSE *temp;
    int ret = FRACASSO;
    temp = (struct noLSE *) malloc(sizeof(struct noLSE));

    if(temp != NULL){

        memcpy(&(temp->dados),reg, desc->taminfo);
        temp->prox = desc->inicio;
        desc->inicio = temp;
        ret = SUCESSO;
    }
    return ret;
}