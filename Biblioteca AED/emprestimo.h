#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

typedef struct emprestimo {
	int codigoUsuario;
	int codigoLivro;
	char dataEmprestimo[11];
	char dataDevolucao[11];
	int pos;
	int posProx;
};

#endif