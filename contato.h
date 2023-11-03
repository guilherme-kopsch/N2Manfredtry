#ifndef CONTATO_H
#define CONTATO_H

struct Contato {
    char nome[100];
    char telefone[20];
    struct Contato* proximo;
    struct Contato* anterior;
};

struct Contato* criarContato(char nome[], char telefone[]);
void liberarContatos(struct Contato* lista);

#endif