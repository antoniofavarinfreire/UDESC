#include"teste.h"
#include<stdlib.h>
#include<stdio.h>

void inicializa_conta(Conta *p, int n, float s){
    p->numero = n;
    p->saldo = s;
}

void mostrar_conta(Conta c){

    printf("Numeoro: %d \n
    Saldo R$ %.2f\n",c.numero,c.saldo);
}