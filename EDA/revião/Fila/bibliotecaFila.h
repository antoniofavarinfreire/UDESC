#define ERRO_FILA_CHEIA -1
#define ERRPO_FILA_VAZIA -2
#define MAX 100
typedef struct fila{
    int *dado;
    int Nelementos;
    int capacidade;
    int inicio, fim;
}Fila;

void cria(Fila *f, int dado);
int filaVazia(Fila f);
int filaCheia(Fila f);
