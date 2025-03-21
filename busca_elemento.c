#include <struct.c>

int buscaElemento(ListaEstatica *lista, int posicao, int *valor){
    if(posicao < 0 || posicao > lista->tamanho){
        return 0;
    }

    valor = lista->dados[posicao];
    
    return 1;
    
}