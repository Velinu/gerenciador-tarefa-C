#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include <string.h>
int conta = 1;

void iniciarFila(Fila *fila){
    fila->prim = NULL;
    fila->fim = NULL;
    fila->tam = 0;
}

void empilharFila(Fila *fila, char tarefa_p[50]){
    NoFila *novo = malloc(sizeof(NoFila));
    if(novo){
        strncpy(novo->tarefa, tarefa_p, sizeof(novo->tarefa) - 1);
        if(fila->prim == NULL){
            fila->prim = novo;
            fila->fim = novo;
            fila->tam++;
        }else{
            fila->fim->prox = novo;
            fila->fim = novo;
            fila->tam++;
        }
    }else{
        printf("\n Não foi possivel empilhar elemento");
    }
}

NoFila* desempilharFila(Fila *fila){
    NoFila *remover = malloc(sizeof(NoFila));
    if(fila->prim == NULL){
        printf("\n A fila está vazia");
    }else{
        remover = fila->prim->prox;
        fila->prim = remover;
        return remover;
        fila->tam--;
    }
}

void imprimirFila(Fila *fila){
    NoFila *aux = malloc(sizeof(NoFila));
    aux = fila->prim;
    if(aux == NULL){
        printf("\n A fila está vazia");
    }else{
        conta = 1;
        while(aux != NULL){
            printf("Tarefa %d: %s \n", conta, aux->tarefa);
            aux = aux->prox;
            conta++;
        }
    }
}