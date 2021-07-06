#include "MatrizDinamica.h"
#include <stdio.h>
#include <stdlib.h>

void inicializa_matriz( MatrizDinamica *p, int l, int c ){
	p->lin = l;
	p->col = c;
	p->m = malloc( sizeof( int* ) * l );
	
	int i, j;
	for( i = 0 ; i < l ; i++ ){
		p->m[i] = calloc( c, sizeof( int ) );
		/*
		p->m[i] = malloc( sizeof( int ) * c );
		for( j = 0 ; j < c ; j++ )
			p->m[i][j] = 0;
		*/
	}
}

void mostra_matriz( MatrizDinamica x ){
	printf("\nDados da matriz (%dx%d):\n", x.lin, x.col);
	int i, j;
	for( i = 0 ; i < x.lin ; i++ ){
		for( j = 0 ; j < x.col ; j++ )
			printf("%4d ", x.m[i][j]);
		printf("\n");
	}
}

void desaloca_matriz( MatrizDinamica *p ){
	int i;
	for( i = 0 ; i < p->lin ; i++ )
		free( p->m[i] );
	
	free( p->m );
}

int modifica_valor( MatrizDinamica *p, int l, int c, int valor ){
	if( l >= p->lin || c >= p->col )
		return ERRO_COORD_INVALIDA;
	
	p->m[l][c] = valor;
	return 1; // Sucesso
}

int soma_matrizes( MatrizDinamica a, MatrizDinamica b, MatrizDinamica *c ){
	if( a.lin != b.lin || a.col != b.col )
		return ERRO_MATRIZES_INCOMPATIVEIS;
	
	inicializa_matriz( c, a.lin, a.col );
	int i, j;
	for( i = 0 ; i < a.lin ; i++ )
		for( j = 0 ; j < a.col ; j++ )
			c->m[i][j] = a.m[i][j] + b.m[i][j];
	return 1; // Sucesso.
}



