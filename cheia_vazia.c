#include <struct.c>


int estaVazia(ListaEstatica *lista){
    return(lista->tamanho == 0);
}

int estaCheia(ListaEstatica *lista){
    return(lista->tamanho == MAX);

}