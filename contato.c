#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contato.h"

struct Contato* criarContato(char nome[], char telefone[]) {
    struct Contato* novoContato = (struct Contato*)malloc(sizeof(struct Contato));
    if (novoContato == NULL) {
        printf("Erro ao alocar memoria para o novo contato.\n");
        exit(1);
    }
    strcpy(novoContato->nome, nome);
    strcpy(novoContato->telefone, telefone);
    novoContato->proximo = NULL;
    novoContato->anterior = NULL;
    return novoContato;
}

void liberarContatos(struct Contato* lista) {
    while (lista != NULL) {
        struct Contato* temp = lista;
        lista = lista->proximo;
        free(temp);
    }
}
