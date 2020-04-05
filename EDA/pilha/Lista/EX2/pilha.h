#define ERRO_PILHA_VAZIA  -1
#define ERRO_PILHA_CHEIA  -2

typedef struct pilha{
    int *dado;
    int capacidade;
    int topo;
}PilhaBinario;

void cria_PilhaBin(PilhaBinario *P, int capaciade);
int testa_vazia(PilhaBinario p);
int testa_cheia(PilhaBinario p);