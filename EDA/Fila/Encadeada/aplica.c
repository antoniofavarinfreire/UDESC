#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

Fila *criaFila(){

    Fila *F = (Fila *) malloc(sizeof(Fila ));

    if (F != NULL){
        F->prox = NULL;
        F->qtd = 0;
    }
    return F;
}

int tamFila(Fila *F){
    
    if(F->qtd == 0){
        return printf("Vazia\n");
    }
    return printf("Existe algo aqui\n");
}