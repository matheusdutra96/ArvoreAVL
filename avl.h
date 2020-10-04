#ifndef AVL_H_INCLUDED
#define AVL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int chave;
	int bal; // hd - he
	struct no *esq;
	struct no *dir;
} No;

typedef No *Arvore;

No *NovoNo(int k);
void LiberaArvore(Arvore r);
void ImprimeArvore(Arvore r, int b);
int Altura(Arvore r);
int InsereArvore(Arvore *r, int k);


#endif // AVL_H_INCLUDED
