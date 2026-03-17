//Como fazer o merge de dois vetores pre-ordenados, gerando um terceiro na mesma odem'

#include <stdio.h>
#include <string.h>

typedef struct {
	char cpf[10];
    char nome[20];
    char email[15];
} Pessoa;




void mostrarPessoa(Pessoa p){
	printf("\n%15s  %19s   %14s", p.cpf,p.nome,p.email)
}

void mostraTodos(Pessoa p[]){
	int i;
	for(i=0; i<qtdade; i++){
		mostraPessoa(p[i])/
	}
}

void merge(Pessoa vA[], int qA, Pessoa vB[],int qB, Pessoa vC[]){
	int i=0,j=0,k=0;
	// joga A e B para a saida, respeitabndo a Ordem
	while (i <qA && j < qB){	
	};
	// jogar para a saida o vetor que não acabou
	while(i < qA){
	}
	while (j < qB){
	}
}

int main() {
    Pessoa A[] = {
        { "000.000.000-00", "Fulano de Tal", "fasffsasf@gmail.com"},
        { "000.000.524-00", "Fulano de sda", "dsasd@gmail.com"},
        { "000.000.321-00", "Fulano de asdqw", "zcxczxc@gmail.com"}
	};
	Pessoa B[] = {
        { "000.312.000-00", "Fulano de gsader", "bvfdgh@gmail.com"},
        { "000.322.524-00", "Fulano de eqwe", "asdasdw@gmail.com"},
        { "000.565.321-00", "Fulano de ewa", "mtyjuy@gmail.com"}
	};
	int i=0,j=0,k=0; 
	Pessoa C[20];
	int qtd_A = sizeof(A) / sizeof(Pessoa);
	int qtd_B = sizeof(B) / sizeof(Pessoa);
	merge(A,qtd_A,qtd_B,C);
	int quantos = qtd_A + qtd_B
	mostraTodos(C,quantos);
