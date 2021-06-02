#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int codigo;
  char descricao[20];
  float preco;
}Produto;

void le_produto(Produto *p){
    printf("Digite Codigo:\n");
    scanf("%d", &p->codigo);
    printf("Digite Descrição:\n");
    scanf("%s", p->descricao);
    printf("Digite Preco:\n");
    scanf("%f", &p->preco);
}

int busca (Produto *v, int n, int codigo){
    
    return 0;
}

int main(int argc, char const *argv[]){
    
    Produto *p;
    int qtd;
    printf("Digite a quantidade de produto: ");
    scanf("%d", &qtd);
    p = malloc(sizeof(Produto)*qtd);
    le_produto(&p);
    return 0;
}
