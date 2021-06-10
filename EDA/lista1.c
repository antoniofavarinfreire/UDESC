#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostra(float *vet, int k, char *nome);
float calcula_media(float *vet, int k);
float *gera_possitivos(float *v, int k, int *p);
float *gera_negativos(float *v, int k, int *p);

int main(int argc, char const *argv[]){
    
    int i, n, n2;    
    printf("Quantos valores? ");
    scanf("%d", &n);

    float *v = malloc(sizeof(float)* n);
    for(i=0;i<n;i++){
        printf("V[%d] = ", i);
        scanf("%f", &v[i]);
    }

    mostra(v, n, "Original: ");
    float media = calcula_media(v, n);
    printf("Méida = %.2f\n", media);

    float *acima = gera_possitivos(v, n,  &n2);

    mostra(acima, n2, "Possitivos: ");
    free(v);
    free(acima);
    return 0;
}

void mostra (float *vet, int n, char *nome){
    printf("%s = ", nome);
    int i;
    for(i=0;i<n;i++){
        printf("%.2f ", vet[i]);
    }
    printf("\n");


}

float calcula_media(float *vet, int k){
    float soma = 0;
    int i;
    for ( i = 0; i < k; i++){
        soma+=vet[i];
    }
    return soma / k;
}

float *gera_possitivos(float *v, int k,  int *p){
    int i;
    *p = 0; 

    for ( i = 0; i < k; i++){
        if(v[i] > 0){
            (*p)++;
        }    
    }
    float *result = malloc(sizeof(float)* *p);
    int j=0;

    for ( i = 0; i < k; i++){
        if(v[i] > 0){
            result[j] = v[i];
            j++;
        }    
    }

    return result;
}