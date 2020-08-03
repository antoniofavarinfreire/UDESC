#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

int main(void){

    int tamvet,i;
    Alunos data[] = {{23,"Pedro"},{32,"Maria"},{18,"Ana"},{81,"Vania"}}, tmp;
    struct descLSE *p = NULL;

    p = cria(sizeof(Alunos));
    tamvet = sizeof(data)/sizeof(Alunos);

    for ( i = 0; i < tamvet; i++){
        if (insereInicio(&data[i],p) == FRACASSO){
            printf("Algo deu errado");
            exit(0);
        }else 
            printf("Inserido no inicio da lista: %s\n", data[i].nome);
        
    }
    printf("Tamnho da fila: %d \n\n",tamanhoDalista(p));
    
    
    

    return 0; 
}