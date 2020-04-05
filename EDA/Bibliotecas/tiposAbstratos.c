#include<stdio.h>
#include<stdlib.h>
#include"teste.h"

/*
-> tipo (struct) //atributo (estado interno)
-> funçoes  //metodos (comportamento)
    /arquivo de cabeçalho (.h)\
        ->declarações [constantes, structs, cabeçalho das funções]
    /Arquivos de implematação (.c)\
        ->implementação das funções     
*/

int main(int argc, char const *argv[]){
    Conta x;
    printf("inicializando uma conta pra vc :3 \n");
    inicializa_conta(&x, 123, 500000);
    printf("Vou te mostrar a conta agora \n");
    mostrar_conta(x);
    return 0;
}
