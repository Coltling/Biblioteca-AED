#include <stdio.h>
#include "menu.h"

int menuPrincipal() {
	printf("\nMenu:\n");
	printf("[0] Cadastrar livro\n");
	printf("[1] Imprimir dados do livro\n");
	printf("[2] Listar todos os livros\n");
	printf("[3] Busca por titulo\n");
	printf("[4] Calcular total\n");
	printf("[5] Cadastrar usuario\n");
	printf("[6] Emprestar Livro\n");
	printf("[7] Devolver livro\n");
	printf("[8] Listar livros emprestado\n");
	printf("[9] Carregar arquivo\n");
	int opc = -1;
	while (opc < 0 || opc>9) {
		printf("Digite o numero da opcao:");
		scanf_s("%d", &opc);
	}
	return opc;
}
