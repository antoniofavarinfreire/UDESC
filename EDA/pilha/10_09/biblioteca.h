#define ERRO_PILHA_VAZIA       -1
#define ERRO_PILHA_CHEIA -2
#define max 100

typedef struct pilha{
    int *dados;
    int topo;
    int capacidade;
}Pilha;

void criaPilha(Pilha *p, int c);
int pilhaVazia(Pilha p);
int pilhaCheia(Pilha p);
int empilha (Pilha *p, int info);
int desempilha(Pilha *p, int *info);
int mostraPilha(Pilha p);