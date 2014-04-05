#include<stdio.h>
 
#define MTAMLISTA 10
 
typedef struct{
    int chave[MTAMLISTA];
    int nElems;
}ListaInt;
 
_Bool consulta(ListaInt l, int x){
    int i;
    for(i = 0;(i < l.nElems) && (l.chave[i] != x; i++);
    return i == l.nElems ? 0 : 1;
}
 
_Bool insere(ListaInt *l, int x){
    int i;
    for (i = 0; (i < l->nElems) && (l->chave[i] != x); i++);
    if (i == MTAMLISTA)
        return 0;
    l->nElems = l->chave[i] == x ? ++i : i;
    l->chave[i] = x;
    return 1;
}
