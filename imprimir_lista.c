#include <struct.c>

void imprimirLista(ListaEstatica *lista){
    printf("Lista [");

    for (int i = 0; i < lista->tamanho; i++)
    {
        printf("%d ", lista->dados[i]);
    }

    printf("]\n");
    
}