#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    char email[70];
    char cpf[50];
} Pessoa;

void apresentaPessoa(Pessoa p) {
    printf("\n Nome[%-30s] Idade[%3d]  Email[%-30s] CPF[%-20s]",
           p.nome, p.idade, p.email, p.cpf);
}

void mostraVet(Pessoa p[], int qtdPessoas) {
    int i = 0;
    printf("\n=================================================================================================================");
    while (i < qtdPessoas)
        apresentaPessoa(p[i++]);
    printf("\n=================================================================================================================");
}

void invVet(Pessoa p[], int ini, int fin) {
    if (ini < fin) {
        Pessoa auxiliar = p[ini];
        p[ini] = p[fin];
        p[fin] = auxiliar;
        invVet(p, ini + 1, fin - 1);
    }
}

int main() {
    Pessoa v[] = {
        {"Fulano de Tal",  20, "fasffsasf@gmail.com", "000.000.000-00"},
        {"Fulano de Tu",   10, "sdfasdf@gmail.com",   "000.000.432-00"},
        {"Fulano de Tamo", 30, "vxzcvadsf@gmail.com", "000.657.000-00"}
    };

    int tamanho = sizeof(v) / sizeof(Pessoa);
    invVet(v, 0, tamanho - 1);
    mostraVet(v, tamanho);
}
