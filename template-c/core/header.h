#ifndef Main_H

#define QD_Data 59
#define VET_LENGTH QD_Data - 1

#define Main_H
// variaveis
int searchYear;
int index;
/* declaracoes das funcoes de lista encadeada*/
void getDataAndOrder();
void selectedOptionMenu(int);
void printfVetor(int);
void buildTable(FILE *, int);
void searchPIBByYear();
void orderUpwardPIB();
void orderDecreasingPIB();

/* declaracoes das funcoes da BST*/
void selectedOptionMenuBST(int);
void getDataAndOrderBST();
void buildBST(FILE *, int); 
void pesquisarValorNaBST();
#endif
