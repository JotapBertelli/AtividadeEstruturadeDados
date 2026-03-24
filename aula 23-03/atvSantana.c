#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    char cpf[15];
} Cliente;

Cliente clientes[MAX];
int total = 0;

// ========================
// 1. INCLUIR CLIENTE
// ========================
void incluicli() {
    if (total >= MAX) {
        printf("\nVetor cheio!\n");
        return;
    }

    getchar(); // limpa o buffer

    printf("\nInsira o nome do cliente: ");
    fgets(clientes[total].nome, 50, stdin);
    clientes[total].nome[strcspn(clientes[total].nome, "\n")] = '\0';

    printf("Insira o CPF do cliente: ");
    fgets(clientes[total].cpf, 15, stdin);
    clientes[total].cpf[strcspn(clientes[total].cpf, "\n")] = '\0';

    total++;
    printf("\nCliente incluido com sucesso!\n");
}

// ========================
// 2. PESQUISA BINARIA POR CPF
// ========================
int pesquisaBinaria(char cpf[]) {
    int inicio = 0, fim = total - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        int cmp = strcmp(clientes[meio].cpf, cpf);

        if (cmp == 0)
            return meio; // encontrou
        else if (cmp < 0)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1; // não encontrou
}

void buscarPorCpf() {
    char cpf[15];
    getchar();
    printf("\nDigite o CPF a pesquisar: ");
    fgets(cpf, 15, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    int pos = pesquisaBinaria(cpf);
    if (pos != -1)
        printf("\nCliente encontrado: Nome: %s | CPF: %s\n", clientes[pos].nome, clientes[pos].cpf);
    else
        printf("\nCliente nao encontrado!\n");
}

// ========================
// 3. ORDENAR POR CPF (Bubble Sort)
// ========================
void ordenarPorCpf() {
    Cliente temp;
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (strcmp(clientes[j].cpf, clientes[j+1].cpf) > 0) {
                temp = clientes[j];
                clientes[j] = clientes[j+1];
                clientes[j+1] = temp;
            }
        }
    }
    printf("\nVetor ordenado por CPF com sucesso!\n");
}

// ========================
// 4. ORDENAR POR NOME (Bubble Sort)
// ========================
void ordenarPorNome() {
    Cliente temp;
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (strcmp(clientes[j].nome, clientes[j+1].nome) > 0) {
                temp = clientes[j];
                clientes[j] = clientes[j+1];
                clientes[j+1] = temp;
            }
        }
    }
    printf("\nVetor ordenado por nome com sucesso!\n");
}

// ========================
// 5. LISTAR TODOS OS CLIENTES
// ========================
void listarClientes() {
    if (total == 0) {
        printf("\nNenhum cliente cadastrado!\n");
        return;
    }
    printf("\n---- LISTA DE CLIENTES ----\n");
    for (int i = 0; i < total; i++) {
        printf("%d. Nome: %s | CPF: %s\n", i+1, clientes[i].nome, clientes[i].cpf);
    }
}

// ========================
// MENU
// ========================
int menu_cli() {
    int opcao;
    printf("\n---- SISTEMA MATA ----\n");
    printf("\n1. INSERIR CLIENTE\n");
    printf("\n2. PESQUISAR (BINARIA) CLIENTE POR CPF\n");
    printf("\n3. ORDENAR POR CPF\n");
    printf("\n4. ORDENAR POR NOME\n");
    printf("\n5. LISTAR CLIENTES\n");
    printf("\n6. FIM\n");
    printf("\nOpcao: ");
    scanf("%d", &opcao);
    return opcao;
}

// ========================
// MAIN
// ========================
int main() {
    int opcao;
    do {
        opcao = menu_cli();
        switch (opcao) {
            case 1: incluicli();      break;
            case 2: buscarPorCpf();   break;
            case 3: ordenarPorCpf();  break;
            case 4: ordenarPorNome(); break;
            case 5: listarClientes(); break;
            case 6: printf("\nEncerrando...\n"); break;
            default: printf("\nOpcao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}
