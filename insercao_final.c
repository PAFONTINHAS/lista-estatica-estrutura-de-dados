#include <struct.c>
#include <cheia_vazia.c>

int inserirFinal(ListaEstatica *lista, int valor){
    if(estaCheia(lista)){
        return 0;
    }
    
    lista->dados[lista->tamanho] = valor;

    // incrementa o tamanho da lista
    lista->tamanho++;

    return 1;
}