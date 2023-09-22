#ifndef FILA
#define FILA
typedef struct noFila{
    char tarefa[50];
    struct noFila *prox;
} NoFila;

typedef struct{
    NoFila *prim;
    NoFila *fim;
    int tam;
} Fila;

void iniciarFila(Fila *fila);

void empilharFila(Fila *fila, char tarefa_p[50]);

NoFila* desempilharFila(Fila *fila);

void imprimirFila(Fila *fila);

#endif