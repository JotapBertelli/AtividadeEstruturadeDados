#include <stdio.h>
#define CADCLI 1
#define CADPRO 2
#define VENDPRO 3
#define RELAT 4
#define FIM 5
 



void cadCli(){
	char c;
	printf("\n Estou no cadastro de clientes\n");
	printf("\n<ENTER> para voltar\n");
	c = getchar();
}


void cadPro(){
	char c;
	printf("\n Estou no cadastro de produtos\n");
	printf("\n<ENTER> para voltar\n");
	c = getchar();
}

void vendPro(){
	char c;
	printf("\n Estou na venda de produtos\n");
	printf("\n<ENTER> para voltar\n");
	c = getchar();
}

void relat(){
	char c;
	printf("\n Estou na venda de produtos\n");
	printf("\n<ENTER> para voltar\n");
	c = getchar();
}


int menu(){
    int opcao;
	printf("\n ------- SISTEMA  MATA   -------\n");
	printf("\n 1. CADASATRO DE CLIENTES    \n");
	printf("\n 2. n CADASATRO DE PRODUTOAS   \n");
	printf("\n 3. n VENDA DE PRODUTOAS   \n");
	printf("\n 4. RELATORIO DE VENDAS     \n");
	printf("\n5 . SAIR DO PROGRAMA        \n");
	printf("\n. Digite o numero da opcao e tecle <ENTER> \n");
	scanf("%d", &opcao);
	return opcao;
	
}

void main(){
	int escolha = menu();
	while (escolha != FIM){
	    switch (escolha) {  
		case CADCLI : cadCli();
		break;
		case CADPRO : cadPro();
		break;
		case VENDPRO : vendPro();
		break;
		case RELAT : relat();
		break;

	}
	escolha = menu();
}
}
