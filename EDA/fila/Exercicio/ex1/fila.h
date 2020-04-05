#define ERRO_FILA_VAZIA -1
#define ERRO_FILA_CHEIA -2

typedef struct fila{
    int *dados;
    int capacidade,n_elementos;
    int inicio,fim;
}Fila;

typedef struct pilha{
    int *dados;
    int capacidade;
    int topo;
}Pilha;
///////////Funcao Fila////////////
void cria_fla(Fila *f, int capacidade);
int testa_vazia(Fila f);
int testa_cheia(Fila f);
int insere_fila(Fila *f, int info);
////////////Funcao Pilha////////////
void cria_pilha(Pilha *p,int capaidade);
int insere_pilha(Pilha *p,int info);
