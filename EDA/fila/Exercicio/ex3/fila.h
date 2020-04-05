#include<biblio.h>

typedef struct {
    int *dados;
    int capacidade;
    int calda,cabeca;
    Pilha p1,p2;
}Fila_nova;

void cria_fila(Fila_nova *p, int capacidade);

int fila_vazia(Fila_nova f);
int fila_cheia(Fila_nova f);
int inserir(Fila_nova *p, int info);
