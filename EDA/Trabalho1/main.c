#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MatrizDinamica.h"

int main(){
    char url[]="arquivo.txt",
      ch;
    int num=0;
    FILE *arq;
 
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    while( (ch=fgetc(arq))!= '\n' )
        printf("%s ", &ch);
        printf("\n");
    fclose(arq);
 
    return 0;
}