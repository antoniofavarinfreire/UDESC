#include<stdio.h>
#include<math.h>

/* 
void inc(int *x);
int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    inc(&n); //recebendo o endereço de n
    printf("%d\n",n);
    return 0;
}

void inc(int *x){
    (*x)++;
}
*/
/*
int calculaRaiz(float a, float b, float c,float *p1, float *p2);

int main (void){

    float a,b,c,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    if(calculaRaiz(a,b,c,&x1,&x2)){
        printf("x1 = %.2f x2 = %.2f",x1,x2);
    }else {
        printf("não ha raízes reais !\n");
    }

    return 0;
}

int calculaRaiz(float a, float b, float c,float *p1, float *p2){
    float cont;
    cont = pow(b,2) - (4 * a * c);
    if(cont<0){
        *p1 = (-b + sqrt(cont))/(2*a);
        *p2 = (-b - sqrt(cont))/(2*a);
        return 1;
    }else{
        return 0;
    }
    
        
}
*/
/* (3) 
typedef struct {
    char nome [30];
    char curso [20];
    int fase;
    float media;
}Aluno;
////////////////
void cria_vetor(v,n);
///////////////
int main(int argc, char const *argv[]){
    int n, i;
    scanf("%d", &n);
    Aluno *v = malloc(sizeof(Aluno)*n);
    cria_vetor(v,n);
    printf("\n");
    mostra(v,n);
    free(v);
    return 0;ss
}

void cria_vetor(Aluno *v, int n){
    int i;
    for ( i = 0; i < n; i++){
        printf("Nome; ");
        fgets(v[i].nome,30,stdin);
        printf("Curso: ");
        fgets(v[i].curso,20,stdin);
        scanf("%d %f", v[i].fase,v[i].media);
    }
    
}

void mostra (Aluno *v, int n){
    int i;
    for ( i = 0; i < n; i++){
        if(v[i].media<7){
            printf("%s\n",v[i].nome);
        }
    }
    
}
*/