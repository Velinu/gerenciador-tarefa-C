

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

int main()
{   
    int opc;
    char cont;
    char novaTarefa[50];
    No *topoPilha = NULL;
    NoFila *remover = malloc(sizeof(NoFila));
    Fila *fila = malloc(sizeof(Fila));
    
    
    do{
        system("clear");
        printf("\n 1. Adicionar nova tarefa");
        printf("\n 2. Imprimir tarefas de alta prioridade");
        printf("\n 3. Imprimir tarefas de baixa prioridade");
        printf("\n 4. Remover tarefa");
        printf("\n 5. Sair\n");
        scanf("%d", &opc);
        fflush(stdin);
        switch(opc){
            case 1:
            do{
                system("clear");
                printf("\n 1. tarefa de baixa prioridade");
                printf("\n 2. tarefa de alta prioridade\n");
                scanf("%d", &opc);
                fflush(stdin);
            }while(opc != 1 && opc != 2);
                if(opc == 1){
                    system("clear");
                    printf("\n Digite sua nova tarefa\n");
                    scanf("%s", &novaTarefa);
                    fflush(stdin);
                    
                    empilharFila(fila, novaTarefa);
                }else{
                    system("clear");
                    printf("\n Digite sua nova tarefa\n");
                    scanf("%s", &novaTarefa);
                    fflush(stdin);
                    
                    topoPilha = empilharPilha(topoPilha, novaTarefa);
                }
            break;
            
            case 2:
                system("clear");
                imprimirPilha(topoPilha);
                scanf("%s", &novaTarefa);
                fflush(stdin);
            break;
            
            case 3:
                system("clear");
                imprimirFila(fila);
                scanf("%s", &novaTarefa);
                fflush(stdin);
            break;
            
            case 4:
                do{
                system("clear");
                printf("\n 1. tarefa de baixa prioridade");
                printf("\n 2. tarefa de alta prioridade\n");
                scanf("%d", &opc);
                fflush(stdin);
            }while(opc != 1 && opc != 2);
                if(opc == 1){
                    remover = desempilharFila(fila);
                }else{
                    remover = desempilharPilha(&topoPilha);
                }    
        }
    }while(opc != 5);
    
    
    return 0;
}
