#include <stdio.h>
#include <stdbool.h>
#define MTMAMLISTA 10

typedef struct {
	int chave[MTMAMLISTA];
	int nelems;
}ListaInt;

void inicializa(ListaInt *l){
	l->nelems = 0;
}

_Bool consulta(ListaInt *l, int x){
	int i;
	for(i=0; (i < l->nelems) && (l->chave[i] != x); i++);
	return i == l->nelems ? false:i;
}

_Bool insere(ListaInt *l, int x){
	int i;
	for(i=0; (i < l->nelems) && (l->chave[i] != x); i++);
	if(i == MTMAMLISTA)
		return false;
	l->nelems = l->chave[i] == x ? ++i:l->nelems;
	l->chave[i] = x;
	return true;
}

void retira(ListaInt *l, int x){
	int v;
	if(v = (int)consulta(l, x))
		l->chave[v] = l->chave[--l->nelems];
}
