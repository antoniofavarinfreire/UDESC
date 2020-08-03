#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FRACASSO 0
#define SUCESSO 1
#define SIM 1
#define NAO 0
typedef struct aluno {
    int idade;
    char nome[50];
}Alunos;

struct noLSE{ //instancia da fila 
     Alunos dados;
    struct noLSE *prox;
};

struct descLSE{
    int taminfo;
    struct descLSE *inicio;
};

struct descLSE *cria(int taminfo);
int tamanhoDalista(struct descLSE *desc);
int reinicia(struct descLSE *desc);

int insereInicio(Alunos*reg, struct descLSE *desc);
