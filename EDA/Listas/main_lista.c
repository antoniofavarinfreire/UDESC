#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int main(int argc, char const *argv[]){
    Lista l1;
    inicializa_lista(&l1,sizeof(float));
    float x = 3, y;
    insere_fim(&l1,&x);
    x = 6;
    remove_fim(&l1,&y);
    printf("y = %2.f\n",y);
    return 0;
}
