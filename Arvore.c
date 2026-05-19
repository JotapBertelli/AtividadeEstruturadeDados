/* Este programa implementa uma árvore binária de PESSOAS, 
em que a chave de comparação é o CPF. 
Teremos aqui as funções de inserção, visitas e busca! */

#include <stdio.h>


typedef struct{
	char cpf[30];
	char nome[40];
	char apelido[30];
	char sexo; // M OU F
	struct Pessoa * esq;
	struct Pessoa * dir;
	
}Pessoa;

void mostra(Pessoa p){
	printf("\n CPF[%s], %s, %s %c\n", p.cpf,p.nome,p.apelido,p.sexo);
}


/*typedef struct{
	Pessoa * raiz
}Arvore;
*/
typedef Pessoa * Arvore; // Ponteiro para pessoa

void initArvore(Pessoa * a){
	//a-> raiz = NULL;
	*a = NULL;
}

void inserir(Arvore * a, Pessoa p){ // a é um ponteiro para Árvore
	if (* a->raiz == NULL){ // Estava Vazia
		*a = m(Pessoa *) malloc(sizeof(Pessoa));
		p.esq == NULL;
		p.dir = NULL;
		**a = p;
		
	}
	else{ 
			if (strcmp((*a)->cpf,p.) == 0)
				return -1; //ERRO, cpf já cadastrado	
			else if (strcmp((*a)->cpf,p.cpf) < 0 )	
				inserir((Arvore *)(* a ) -> dir, p);
			else
				inserir((Arvore * )& (*a)->esq, p);
	}
}


void ordem( Arvore a){
	if (a != NULL){
		ordem(a->esq);
		mostra((Pessoa) *a);
		ordem(Arvore) a->dir);
	}
}



void main(){
	Arvore seringueira;
	init(&seringueira);
	Pessoa p1 = {"123", "Fulano", "Feio", "M"};
	Pessoa p2 = {"234", "CiclanA", "Chata", "F"};
	Pessoa p3 = {"456", "Beltrano", "Bobo", "M"};
	Pessoa p4 = {"678", "Alano", "Tatu", "M"};
	Pessoa p5 = {"567", "Elano", "Ze", "M"};
	inserir(&seringueira, p3);
	inserir(&seringueira, p4);
	inserir(&seringueira, p1);
	ordem(seringueira);
}
 
