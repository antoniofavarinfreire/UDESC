#define ERRO_COORD_INVALIDA -1
#define ERRO_MATRIZES_INCOMPATIVEIS -2

typedef struct{
	int lin, col;
	int **m;
}MatrizDinamica;

void inicializa_matriz( MatrizDinamica *p, int l, int c );
void mostra_matriz( MatrizDinamica x );
void desaloca_matriz( MatrizDinamica *p );
int modifica_valor( MatrizDinamica *p, int l, int c, int valor );
int soma_matrizes( MatrizDinamica a, MatrizDinamica b, MatrizDinamica *c );


