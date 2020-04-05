#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"
/*
    Fila: estrutura linear, cujo acesso é feito em ambas as estremidades:
    No final -> inserção
    No inicio -> remoção

    Aplicações:
        ->Acesso a recursos;
            -Sistema Operacional;
            -Ambiente de Simulação;
            -Ambiente de Comunicação;
    
    Tipos 
        ->Fila de Prioridades;
        ->Duplo fim
*/  

int main(int argc, char const *argv[]){
    Fila *f;
    int capacidade;
    scanf("%d",&capacidade);
    cria(f,capacidade);
    while(capacidade != 0){
        if(fila_cheia(*f)){
            printf("Erro fila cheia");
        } else {
            int i, conteudo;
            for(i = 0 ; i<capacidade ; i++){
                insere(f,conteudo);
            }

        }
        capacidade --;

    }
    printf("Diria que ate aqui funciona");
    return 0;
}

