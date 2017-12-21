#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	char nome[300];
	int idade;
	char rg[20];
	char cpf[20];
	char usuario[100];
	char senha[100];
}cadastro;
typedef struct{
	float saldo;
	int insere;
	int retira;
	float inserido;
	float retirado;
}ext;
void criarconta(){
	cadastro cliente;
	char conta[300], registro[300];
	FILE * arquivo;
	printf("Insira a idade:");
	scanf("%d", &cliente.idade);
	if(cliente.idade>=18){
		printf("\nInsira o primeiro nome:");
		scanf("%s",cliente.nome);
		strcpy(registro, cliente.nome);
		strcat(registro, ".txt");
		arquivo = fopen(registro, "w");
		printf("Insira o rg:");
		scanf("%s", &cliente.rg);
		printf("Insira o cpf:");
		scanf("%s", &cliente.cpf);
		printf("Insira o usuario:");
		scanf("%s", &cliente.usuario);
		printf("Insira a senha:");
		scanf("%s", &cliente.senha);
		fprintf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",cliente.nome,cliente.idade,cliente.rg, cliente.cpf, cliente.usuario, cliente.senha);
	}
	else{
		printf("\nIdade Insuficiente!\n");
		system("pause");
		return;
	}
	fclose (arquivo);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, 0, 0.00, 0, 0.00);
	fclose (arquivo);
}
void mostrarconta(){
	FILE * arquivo;
	cadastro cliente;
	char registro[300];
	printf("\nInsira o nome do cliente:");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	arquivo = fopen(registro, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause"); 
		return;
	}
	fscanf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg, &cliente.cpf, &cliente.usuario, &cliente.senha);
	fclose(arquivo);
	fprintf(stdout,"NOME: %s",cliente.nome);
	fprintf (stdout, "\nIDADE: %d",cliente.idade);
	fprintf(stdout, "\nRG: %s",cliente.rg);
	fprintf(stdout,"\nCPF: %s",cliente.cpf);
	fprintf (stdout, "\nUSUARIO: %s\n",cliente.usuario);
	system("pause");
	return;
}
void saldo(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nInsira o nome do cliente:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo,"%f",&valor.saldo);
	fclose(arquivo);
	printf("\nSaldo: %.2f\n",valor.saldo);
	system("pause");
	return;
}
void inserir(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dinheiro;
	printf("\nInsira o nome do cliente:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.inserido, &valor.retira, &valor.retirado);
	fclose(arquivo);
	printf("\nDigite o valor a ser inserido: ");
	scanf("%f", &dinheiro);
	valor.saldo = valor.saldo + dinheiro;
	valor.insere ++;
	valor.inserido = valor.inserido + dinheiro;
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.inserido, valor.retira, valor.retirado);
	fclose (arquivo);
	printf("\nDinheiro inserido.\n");
	system("pause");
	return;
}
void retirar(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dinheiro;
	printf("\nInsira o nome do cliente:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.inserido, &valor.retira, &valor.retirado);
	fclose(arquivo);
	printf("\nDigite o valor a ser retirado: ");
	scanf("%f", &dinheiro);
	if(dinheiro>valor.saldo){
		printf("\nSaldo insuficiente.\n");
	}
	else if(dinheiro==valor.saldo){
		valor.retira ++;
		printf("\nVoce retirou todo o seu dinheiro.\n");	
		arquivo = fopen(conta, "w");
		
		valor.retirado = valor.retirado + dinheiro;
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, valor.insere, valor.inserido, valor.retira, valor.retirado);
		
		fclose (arquivo);
	}
	else{
		valor.retira ++;
		valor.saldo = valor.saldo - dinheiro;
		valor.retirado = valor.retirado + dinheiro;
		arquivo = fopen(conta, "w");
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.inserido, valor.retira, valor.retirado);
		fclose (arquivo);
		printf("\nValor retirado.\n");
	}
	system("pause");
	return;
	
}
void extrato(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nDigite o nome do cliente:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.inserido, &valor.retira, &valor.retirado);
	fclose(arquivo);
	printf("\nSaldo: %.2f\n",valor.saldo);
	printf("\nVoce inseriu %.2f em %d vezes\n",valor.inserido,valor.insere);
	printf("\nVoce retirou %.2f em %d vezes\n",valor.retirado,valor.retira);
	system("pause");
	return;
}
void removerconta(){
	FILE * arquivo;
	cadastro cliente;
	char conta[300], registro[300];
	printf("\nDigite o nome do cliente que sera removido:");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	remove(registro);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	remove(conta);
	printf("\nCliente removido com sucesso.\n");	
}
int main(){
	int op;
	do{ 
		system("cls");
		printf("Bem-vindo ao mini banco!");
		printf("\nEscolha uma opcao:\n");
		printf("\n1- Criar conta:");
		printf("\n2- Mostrar conta:");
		printf("\n3- Mostrar saldo:");
		printf("\n4- Realizar deposito:");
		printf("\n5- Realizar saque:");
		printf("\n6- Extrato:");
		printf("\n7- Remover conta:");
		printf("\n8- Sair.\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				criarconta();
				break;
			case 2:
				mostrarconta();
				break;
			case 3:
				saldo();
				break;
			case 4:
				inserir();
				break;
			case 5:
				retirar();
				break;
			case 6:
				extrato();
				break;
			case 7:
				removerconta();
				break;
			case 8:
				break;
			default:
				printf("\nOpcao invalida!\n");
				system("pause");
		}
	}while(op!=8);
	return 0;
}
