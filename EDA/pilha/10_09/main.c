#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

int main(int argc, char const *argv[]){
    Pilha p;
    
    criaPilha(&p,10);
    char c = 'a';
    empilha(&p,c);
    return 0;
}
