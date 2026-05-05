#include <stdio.h>
#define MAX 50


typedef strcut{
	char titulo[40];
	char interprete[40];
	char caminho[60];
}Musica;



typedef struct{
	musica vetmus[MAX];
	int inicial;
	int final;
}FilaMus;

int FilaVazia(FilaMus F){
	return(f.inicial == f.final);
	
}
int FilaCheia(FilaMus F){
	return(f.final > MAX - 1 );
}

int inserir(FilaMus *f,Musica m){
	if(FilaCheia(*f))
	return -1;
	else{
		f ->vetmus[f->final] = m;
		f->final = f->final++;
		return 0;
	}
}

/// função de retirar


void menu(){
	printf("\n---- Menu Musical -----\n")
	printf("")
}






//final: onde vai ser armazenada a próxima música (se fila não cheia) inicio = 0;
//inicial : onde está próxima música a ser retirada (se fila não vazia) inicio = 0;
