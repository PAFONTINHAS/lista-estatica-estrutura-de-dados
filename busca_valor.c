#include <struct.c>

int buscaValor(ListaEstatica *lista, int valor){
    // Percorre a lista procurando o valor
    for (int i = 0; i < lista->tamanho; i++)
    {
        if(lista->dados[i] == valor){
            return 1;
        } 
    }

    return -1;
    
}