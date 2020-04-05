typedef struct elemento{
    void *info; /*adiciona qualquer tipo de informação*/
    struct elemento *prox; /*chama novamente a estrutura, para que seja adicionado uma nova info*/
}Elemento;

typedef struct lista{
   Elemento *head;
   int taminfo;
   int quantidade;
}Lista;

void inicializa_lista(Lista *l, int info);
int insere_inicio (Lista *l, void *info);
int remove_inicio(Lista *l, void *info);
int insere_fim(Lista *l, void *info);
int remove_fim(Lista *l, void *info);
int removeDaPos(Lista*l, void *info, int pos);