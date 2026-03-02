#include <stdio.h>
#include <string.h>
typedef struct {
	char nome[30];
	int idade;
	float salario;
}Pessoa ;


/*
Pessoa criaPessoa(){
		Pessoa johnBrober ; 
		printf("\n Informe o nome:  ");
		scanf("%s",johnBrober.nome);
		printf("\n Informe a idade:  ");
		scanf("%d", johnBrober.idade);
		printf("Informe o salário: ");
		scanf("%f", johnBrober.salario);
		return johnBrober;
}
*/



void apresentaPessoa(Pessoa p){
	printf("\n---------------------------------------------------------------");
	printf("\n|-%30s   %5d    R$ %6.2f|",p.nome,p.idade,p.salario);
	printf("\n---------------------------------------------------------------\n\n");
}

void dobrarSalario(Pessoa *  p){  //recebe o endereço de uma pessoa
	p->salario = 2 * p->salario;
	//(*p).salario = 2 * (*p).salario; //tambem funciona !!!
}

void main(){
	Pessoa maria = {"Maria Alice",19,7600.00};
	Pessoa pedro,joao ; 
	strcpy(pedro.nome, "Pedro Lucas");
	pedro.idade = 30;
	pedro.salario = 4500.00;
	
	
	apresentaPessoa(pedro) ;
	apresentaPessoa(maria) ;
	joao = pedro;
	apresentaPessoa(joao) ; //Passa o endereço do João
	dobraSalario(&joao);
}
