#include <struct.c>
#include <cheia_vazia.c>

int removerPosicao(ListaEstatica *lista, int posicao, int *valor){
    
    if(estaVazia(lista) || posicao < 0 || posicao >= lista->tamanho){
        return 0;
    }

    // Armazena o valor removido
    valor = lista->dados[posicao];

    // Desloca os elementos para preencher o espaço vazio

    for (int i = posicao; i < lista->tamanho - 1; i++)
    {
        lista->dados[i] = lista->dados[i+1];
    }
    
    // decrementa o tamanho da lista
    lista->tamanho--;

    return 1;
}