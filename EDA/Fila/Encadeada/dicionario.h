#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int cpf;
    char nome[100];
    float n1,n2;
}Alunos;

typedef struct fila_encadeada{
    Alunos dados;
    int qtd;
    struct fila_encadeada *prox;
}Fila;

Fila *criaFila();
int tamFila(Fila *F);