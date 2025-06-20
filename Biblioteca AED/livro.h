#ifndef LIVRO_H
#define LIVRO_H

typedef struct livro
{
	int codigo;
	char titulo[151];
	char autor[201];
	char editora[51];
	int edicao;
	int ano;
	int exemplares;
	int pos;
	int posProx;
};

#endif

