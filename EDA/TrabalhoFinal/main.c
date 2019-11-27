#include<stdio.h>
#include<stdlib.h>
#include"dupla.h"

int main(int argc, char const *argv[]){
    Lista l1;
    int escolha;
    //cria_lista(&l1,sizeof(float));
    do{
        printf("\n\n ----------------------- ");

        printf("\n 1 - Criar conjunto ");
        printf("\n 2 - Mostra conjunto ");
        printf("\n 3 - Concatena conjunto ");
        printf("\n 4 - Esclui conjunto ");
        printf("\n 0 - Fechar Programa ");
        printf("\n\n Escolha uma opcao: ");
        scanf("%d",&escolha);
        switch (escolha){
        case 1:
            printf("opa\n");
            int x;
            scanf("%d",&x);
            cria_conjunto(&l1,x);
            break;
        }
    } while (escolha!=0);
    
    
}
