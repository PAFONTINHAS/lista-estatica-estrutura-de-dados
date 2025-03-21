#include <struct.c>
#include <cheia_vazia.c>

int inserirPosicao(ListaEstatica *lista, int valor, int posicao){
    if(estaCheia(lista) || posicao < 0 || posicao > lista->tamanho){
        return 0;
    }

    // Desloca os elementos para abrir espaço para o novo valor

    for (int i = lista->tamanho; i > posicao; i--)
    {
        lista->dados[i] = lista->dados[i-1];
    }

    // Insere o elemento na posição desejada

    lista->dados[posicao]  = valor;

    // Incrementa o tamanho da lista;
    lista->tamanho++;
    
    return 1;
}