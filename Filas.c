#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct{
	char titulo[40];
	char interprete[40];
	char caminho[60];
}Musica;

typedef struct{
	Musica vetmus[MAX];
	int inicial;
	int final;
}FilaMus;

int FilaVazia(FilaMus f){
	return(f.inicial == f.final);
}

int FilaCheia(FilaMus f){
	return(f.final > MAX - 1);
}

void initFilaMus(FilaMus *f){
	f->inicial = 0;
	f->final = 0;
}

int inserir(FilaMus *f, Musica m){
	if(FilaCheia(*f))
		return -1;
	else{
		f->vetmus[f->final] = m;
		f->final = f->final + 1;
		return 0;
	}
}

Musica* retirar(FilaMus *f){
	if(FilaVazia(*f))
		return NULL;
	else{
		Musica *pm = (Musica*) malloc(sizeof(Musica));
		if(pm != NULL){
			*pm = f->vetmus[f->inicial];
			f->inicial = f->inicial + 1;
		}
		return pm;
	}
}

void playMus(Musica m){
	char comando[150];
	sprintf(comando, "start \"\" \"%s\"", m.caminho);
	system(comando);
}

void mostrarMusica(Musica m){
	printf("\nTítulo: %s\nIntérprete: %s\nCaminho: %s\n", m.titulo, m.interprete, m.caminho);
}



int main(){
	Musica m1 = {"Mina do Condominio", "Seu Jorge", "C:\\Users\\Aluno\\Music\\minadocondominio.mp3"};
	FilaMus playlist;
	int inseriu_OK;
	
	initFilaMus(&playlist);
	inseriu_OK = inserir(&playlist, m1);
	
	if(inseriu_OK == 0){
		printf("Musica inserida com sucesso!\n");
		mostrarMusica(m1);
		printf("\nTocando música...\n");
		playMus(m1);
	}
	else{
		printf("Erro ao inserir musica!\n");
	}
	
	return 0;
}
