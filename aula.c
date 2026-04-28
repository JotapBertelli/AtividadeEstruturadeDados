// lista lineares - Estrutura de Dados Aula 27/04

#include <stdio.h>


//push(p1,'m')
//x = pop(p1)
//push(p1,x)


typedef struct{
	char titulo[35];
	char autor[35];
}Livro;

typedef struct{
	int topo;
	Livro lv[MAX]
}Pilha;

void initPilha(Pilha * p)
int pilhaCheia(Pilha p)
int pilhaVazia(Pilha p)
int push(Livro L, Pilha * p)
Livro * pop(Pilha * p)
