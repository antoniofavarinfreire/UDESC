#define ERRO -1

typedef struct elemento{
    void *info;
    struct elemento *prox;
    struct elemento *ant;
}Elemento;

typedef struct Lista{
    Elemento *head;
    int taminfo;
    int quant;
}Lista;

void cria_lista(Lista *l, int info);
int insere_elemento(Lista *l, void *info);
int vazia(Lista l);