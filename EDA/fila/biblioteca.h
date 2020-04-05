#define ERRO_FILA_VAZIA -1
#define ERRO_FILA_CHEIA -2

typedef struct{
    int *dados;
    int capacidade, n_elementos;
    int inicio, fim;
}Fila;

//cabeçalhos

void cria(Fila *p,int capacidade);
int fila_vazia(Fila p);
int fila_cheia(Fila p);
int insere(Fila *p, int info);
int remove(Fila *p, int *info);
void mostra_fila(Fila f);