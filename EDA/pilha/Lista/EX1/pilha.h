#define ERRO_PILHA_VAZIA -1
#define ERRO_PILHA_CHEIA -2

typedef struct {
    int *dados;
    int capacidade;
    int topo1;
    int topo2;
}Pilha;

void cria_pilha(Pilha *p,int capacidade);
int testa1_vazia(Pilha p);
int testa_cheia(Pilha p);
int empilha(Pilha *p, int info);
