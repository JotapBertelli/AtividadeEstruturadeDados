//Alocação dinamica de memoria
// Este programa exemplifica 
#include <stdio.h>
#include <stdlib.h>
#iclude <malloc.h>

typedef struct{
	char titulo[40];
	char interprete[40];
	char caminho[60];
	struct Musica * anterior;
	struct Musica * proxima;
	Musica ; 
}Musica;

void playMus(Musica m){
	char comando[150];
	sprintf(comando, "start \"\" \"%s\"", m.caminho);
	system(comando);
}

void mostrarMusica(Musica m){
	printf("\nTitulo: %s\nInterprete: %s\nCaminho: %s\n", m.titulo, m.interprete, m.caminho);
}



/* Fila De Musica */

typedef struct{
	Musica * primeira;
	Musica * ultima;
}FilaMus;


void initFilaMus(FilaMus * f){
	f->primeira = NULL;
	f->ultima = NULL;
}

int filaVazia(FilaMus f){
	return (f.primeira == NULL);
	
}

int inserir( FilaMus *f, Musica m){
	Musica * aux = (Musica *) malloc(sizeof(Musica));
	if (aux == NULL)
		return -1 // Memoria Insuficiente
	else{
		if (filaVazia (*f))
				m.anterior = NULL;
				m.proxima = NULL;
				*aux = m;
				f->primeira = aux;
				f->ultima = aux;
			}
			else{
				m.proxima = NULL ; 
				m.anterior = (struct Musica *) f->ultima;
				*aux = m;
				f->ultima->proxima = (struct Musica *) aux;
				f->ultima = aux;
		}
		return 0 ; //sucess!!!
	}
}

void main(){
	
}
