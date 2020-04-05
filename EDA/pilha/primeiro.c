#include<stdio.h>
#include<string.h>
#include"biblio.h"

int main(int argc, char const *argv[]){
    Pilha p1;
    criaPilha (&p1,10);
    empilha(&p1,3);
    empilha(&p1,6);
    int x =10,y;
    empilha(&p1,x);
    if (desempilha(&p1,&y) == ERRO_PILHA_VAZIA){
        printf("ERRO!");
    } else {
        printf("Valor Removido: %d\n",y);
    }
    mostraPilha(p1);

       
    return 0;
}
