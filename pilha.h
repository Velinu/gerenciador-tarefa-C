#ifndef PILHA
#define PILHA

typedef struct no{
    char tarefa[50];
    struct no *prox;
} No;

No* empilharPilha(No *topo, char tarefa_p[50]);

No* desempilharPilha(No **topo);

No* imprimirPilha(No *topo);

#endif