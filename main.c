#include <stdio.h>
#include <string.h>
#include "contato.h"

int main() {
    struct Contato* lista = NULL;
    int escolha;
    char nome[100];
    char telefone[20];

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite o nome do contato: ");
                scanf("%s", nome);
                printf("Digite o telefone do contato: ");
                scanf("%s", telefone);
                inserirContato(&lista, nome, telefone);
                printf("Contato inserido com sucesso.\n");
                break;
            case 2:
                printf("Digite o nome do contato que deseja consultar: ");
                scanf("%s", nome);
                 consultarContato(lista, nome);
                break;
            case 3:
                printf("Digite o nome do contato que deseja excluir: ");
                scanf("%s", nome);
                excluirContato(&lista, nome);
                break;
            case 4:
                printf("Digite o nome do contato que deseja alterar: ");
                scanf("%s", nome);
                alterarContato(lista, nome);
                break;
            case 5:
                listarContatos(lista);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (escolha != 6);

    // Libera a memória alocada para os contatos ao final do programa
    liberarContatos(lista);

    return 0;
}
