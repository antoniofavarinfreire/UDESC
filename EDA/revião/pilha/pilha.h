# define ERRO_PILHA_VAZIA -1
# define ERRO_PILHA_CHEIA 1

typedef struct pilha{
    int *dados;
    int topo1,topo2;
    int capacidade;
}Pilha;

void cria_pilha(Pilha *p, int c);
int testa_vazia(Pilha p);
int testa_vazia2(Pilha p);
int testa_cheia(Pilha p);
int insere_p1(Pilha *p,int info);