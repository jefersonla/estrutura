#include <stdio.h>
#include <stdbool.h>
#define MTAMLISTA 10

typedef struct ListaInt{
	int chave;
	struct ListaInt *prox;
} noListaInt, *ListaInt;

void inicializa(ListaInt *l){
	*l = null;
}

_Bool consulta(ListaInt *l, int x){
	noListaInt *p;
	for (p = l; (p) && (p->chave != x); p = p->prox);
	return p;
}

_Bool insere(ListaInt *l, int x){
	ListaInt *p, *aux;
	if ( (!consulta(l,x)) || (!(p = (ListaInt*) malloc(sizeof(ListaInt)))))
		return false;
	p->chave = x;
	p->prox = *l;
	*l = p;
	return true;
}

void retira(ListaInt *l, int x){
	ListaInt *p = l;
	int *ant,
	if (consulta(l,x))

}
