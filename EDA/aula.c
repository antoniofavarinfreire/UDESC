#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
  int codigo;
  char descricao[20];
  float preco;
}Produto;

void le_produto(Produto *p);
void mostra_produto (Produto *p);
int busca (Produto *v, int n, int codigo);

int main(int argc, char const *argv[]){
    /*
    Produto *p;
    int qtd;
    printf("Digite a quantidade de produto: ");
    scanf("%d", &qtd);
    int i;

    for(i=0 ; i<qtd ; i++){
        
        le_produto(&p[i]);

    }
    */
    Produto p[] = {{111, "cafe", 6},
                    {222, "bolo", 10},
                    {345, "cha", 4.5},
                    {555, "trota", 15}};
    int i, qtd;

    int n = sizeof(p)/sizeof(Produto);

    
    char resp;
    do {
        int codigo;
        printf("Digite o codigo do produto para busca: ");
        scanf("%d", &codigo);
        int idx = busca (p, qtd, codigo);
        if (idx == 1){
            printf("produto encontrado!! \n");
        } else {
         printf("Não encontrado!!\n");
        }
        printf("Deseja continuar (s/n)?");
        scanf(" %c", &resp);
    }while (resp == 's'); 
    return 0;
}

void le_produto (Produto *p){
    
    printf("Digite Codigo:\n");
    scanf("%d", &p->codigo);
    printf("Digite Descrição:\n");
    scanf("%s", p->descricao);
    printf("Digite Preco:\n");
    scanf("%f", &p->preco);

}

void mostra_produto (Produto *p){
    printf("%d, %s, %.2f\n", p->codigo, p->descricao, p->preco);
}

int busca (Produto *v, int n, int codigo){
    int i;
    for (i=0 ; i< n ; i++){
        if(v[i].codigo == codigo){
            return 1;
        } else {
        return 0;
        }
    }
    
    
}