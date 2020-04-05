#define ERRO_PILHA_VAZIA -1
#define ERRO_PILHA_CHEIA -2
#define max 100

typedef struct pilha{
    int *dados;
    int topo;
    int capacidade;
}Pilha;

void inicializa_pilha(Pilha *p, int c); // Aloca pilha com capacidade c.
int pilha_vazia(Pilha p); // Função booleana que verifica se pilha está vazia.
int pilha_cheia(Pilha p); // Função booleana que verifica se pilha está cheia.
int empilha(Pilha *p, int info); // Insere um valor no topo da pilha.
int desempilha(Pilha *p, int *info); // Remove o valor do topo da pilha.
int le_topo(PilhaGenerica p, int *info); // Somente leitura do valor no topo.
int mostra_pilha(Pilha p); // Mostra os dados da pilha na tela (console).
void desaloca_pilha(Pilha *p); // Liberap);