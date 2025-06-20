#include <stdio.h>
#include "livro.h"
#include "usuario.h"
#include "emprestimo.h"
#include "menu.h"

typedef struct {
	int cabeca;
	int topo;
	int livre;
}Cabecalho;

FILE* abrirArquivoBinario(char arquivo[]) {
	FILE* file = fopen(arquivo, "ab+");
	if (!file) {
		FILE* file = fopen(arquivo, "wb+");
		if (!file) {
			printf("Falha ao abrir e criar arquivo");
			return 1;
		}
		printf("Arqivo criado");
		return file;
	}
	printf("Arquivo aberto");
	return file;
}

int main() {
	char arquivo[] = "biblioteca.txt";
	FILE* arquivo = abrirArquivoBinario(arquivo);
	int opc;
	opc = menuPrincipal();

}