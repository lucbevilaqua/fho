#ifndef BST_H

#define BST_H
/* estrutura do noh da lista */
typedef struct _arvore{
	char uf[3];
	float a2015, a2016, a2017, a2018, a2019;
	struct _arvore *pai;
	struct _arvore *esq;
	struct _arvore *dir;
} Arvore;


/* declaracoes das funcoes de lista */
void inicializaLista(Arvore**);
int listaVazia(Arvore*);

void imprimeDado(Arvore *tree);

void imprimePreOrdem(Arvore*);
void imprimePosOrdem(Arvore*);
void imprimeEmOrdem(Arvore*);

Arvore* pesquisarValor(Arvore*, float);
void inserirValor(Arvore**, char[3], float, float, float, float, float);

#endif