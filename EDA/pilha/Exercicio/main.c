#include<stdio.h>
#include<string.h>
#include"biblio.h"

int main(int argc, char const *argv[]){
    int x;
    scanf ("%d",&x);
    Pilha p1;
    criaPilha(&p1,32);
    do{
        int resto = x%2;    
        empilha(&p1,resto);
        x = x/2;
    } while (x!=0);
    while (!pilhaVazia(p1)){
        desempilha(&p1,&x);
        printf("%d",x);
    }
    
    
    return 0;
}
