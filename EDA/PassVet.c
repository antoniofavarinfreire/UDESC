#include<stdio.h>
#include<stdlib.h>

void le_vetor(float *p, int n);
void mostra_vetor(float *v, int n);
void ordena_vetor(float *v, int n);

int main(int argc, char const *argv[]){
    int n;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&n);
    float *v = malloc(sizeof(float)*n);
    le_vetor(v,n);
    printf("\n");
    mostra_vetor(v,n);
    printf("\n");
    ordena_vetor(v,n);
    printf("\n");
    mostra_vetor(v,n);
    
    free(v);
    return 0;
}

void le_vetor(float *p, int n){
    int i;
    for(i=0;i<n;i++){
        printf("V[%d] = ",i);
        scanf("%f",p+i);
    }
}

void mostra_vetor(float *v, int n){
    float *i;
    for (i=v; i < v+n; i++){
        printf("v[%u] = %.2f\n",i-v,*i); /*(%u) para memoria não sinalizado */
    }
    
}

void ordena_vetor(float *v, int n){
    int i;
    for ( i = 0; i < n - 1 ; i++){
        int j,i_menor = i;
        for(j=i+1;j<n;j++){
            if(v[j]<v[i_menor]){
                i_menor = j;
            }
        }
        float aux = v[i];
        v[i] = v[i_menor];
        v[i_menor] = aux; 
    }
    
}