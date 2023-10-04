#include <stdio.h>

struct {
	int numeroConta;
	char nome[100];
	float saldo;
} cadastro[100;

int main() {
	int opcao = 1;
	int posicao;
	int cont=0;
	
	printf("===============MENU=================\n");
	printf("  1-Cadastro                     \n");
	printf("  2-Ver as contas de um cliente     \n");
	printf("  3-Excluir a conta com menor saldo \n");
	printf("  4-Sair                            \n");
	printf("====================================\n");
	
	while (opcao != 4) {
		printf("Escolha uma opcao(ou 0 para sair): ");
		scanf("%d", &opcao);

		int i;

		if (opcao==1) {
			printf("Digite o numero da conta: ");
			scanf("%d", &cadastro[cont].numeroConta);

			printf("Digite o nome do cliente: ");
			scanf("%s", &cadastro[cont].nome);

			printf("Digite o saldo: ");
			scanf("%f", &cadastro[cont].saldo);
			
			for (i=0; i<100; i++) {
				if (cadastro[cont].numeroConta == cadastro[i].numeroConta) {
					printf("===============================\n");
					printf("=========NUMERO INVALIDO=======\n");
					printf("===============================\n");
					break;
				}
			}
			printf("==========================\n");
			printf("    CONTA CADASTRADA      \n");
			printf("==========================\n");
			
		} else if (opcao==2) {
			char name[100];
			printf("Digite um nome: ");
			scanf("%s", &name);
			for (i=0; i<cont; i++) {
				if (name == cadastro[i].nome) {
					printf("Numero da conta %d: %d\n", (i+1), cadastro[i].numeroConta);
					printf("Nome do cliente %d: %s\n", (i+1), cadastro[i].nome);
					printf("Saldo do cliente %d: %.2f\n", (i+1), cadastro[i].saldo);
				} else {
					printf("==============================\n");
					printf("   USUARIO NAO ENCONTRADO     \n");
					printf("==============================\n");
				}	
			}
		} else if (opcao == 3) {
			float menor=cadastro[0];
			for (i=0; i<cont; i++) {
				if (cadastro[i].saldo < menor.saldo) {
					menor = cadastro[i];
				}
			}
			menor
		}
	}
}

