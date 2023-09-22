#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>
int cont=1;
No* empilharPilha(No *topo, char tarefa_p[50]){
    No *novo = malloc(sizeof(No));
    
    if(novo){
        strncpy(novo->tarefa, tarefa_p, sizeof(novo->tarefa) - 1);
        novo->prox = topo;
        return novo;
    }else{
        printf("\n Não foi possível empilhar elemento");
    }
}

No* desempilharPilha(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->prox;
        return remover;
    }else{
        printf("\n A pilha está vazia");
    }
}

No* imprimirPilha(No *topo){
    No *aux = topo;
    if(topo != NULL){
        cont = 1;
        while(aux != NULL){
            printf("Tarefa %d: %s \n", cont, aux->tarefa);
                aux = aux->prox;
            cont++;
        }
    }else{
        printf("\n A pilha está vazia");
    }
}