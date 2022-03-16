#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int valor_vertice;
    struct Nodo *prox;
};

struct nodo *first;


void new_vertice(struct nodo *grafo, int valor){
    struct nodo *temp = malloc(sizeof(struct nodo));

}
