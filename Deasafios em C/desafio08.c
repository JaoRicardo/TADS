#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
	int chave;
	char nome[40];
	int idade;
	int peso;
	double salario;
} Pessoa;

typedef struct{
	Pessoa dados[MAX]; // CARGA DE DADOS
	int tam;
}PILHA;

void menu();
Pessoa lerDados();
void imprimirDados(Pessoa p);
void iniciarPilha(PILHA *p);
int isEmpty(PILHA *p);
int isFull(PILHA *p);
void empilhar(PILHA *p, Pessoa pessoa);
void desempilhar(PILHA *p);
Pessoa topo(PILHA *p);

int main(){	
	int op;
	
	PILHA pilha;
	iniciarPilha(&pilha);
	do{
		menu();
		scanf("%d",&op);
		switch (op)	{
			case 1:{
				if(!isFull(&pilha)){
					empilhar(&pilha,lerDados());
				}
				else{
					printf("Pilha cheia!!!");
					system("pause");
				}
				break;
			}
			case 2:{
				if(!isEmpty(&pilha))
					desempilhar(&pilha);
				else{
					printf("Pilha vazia!!!");
					system("pause");
				}
				break;
			}
			case 3:{
				if(!isEmpty(&pilha)){
					imprimirDados(topo(&pilha));
				}
				else{
					printf("Pilha vazia!!!");
				}
				system("pause");
				break;
			}
			case 4:{
				break;
			}
		}
	}
	while(op!=0);
}

void menu(){
	system("cls");
	printf("Digite uma opcao:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("3 - Topo\n");
	printf("0 - Sair\n");
}

Pessoa lerDados(){
	Pessoa p;
	
	printf("Chave:");
	scanf("%d",&p.chave);
	printf("Nome:");
	fflush(stdin);
	fgets(p.nome,40,stdin);
	printf("Idade:");
	scanf("%d",&p.idade);
	printf("Peso:");
	scanf("%d",&p.peso);
	printf("Salario:");
	scanf("%lf",&p.salario);
	return p;
}

void imprimirDados(Pessoa p){
	printf("Chave:%d\n", p.chave);
	printf("Nome:%s", p.nome);
	printf("Idade:%d\n", p.idade);
	printf("Peso:%d\n", p.peso);
	printf("Salario:%.2lf", p.salario);		
}

void iniciarPilha(PILHA *p){
	p->tam=0;
}

int isEmpty(PILHA *p){
	if(p->tam <= 0){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(PILHA *p){
	if(p->tam >= MAX){
		return 1;
	}
	else {
		return 0;
	}
}

void empilhar(PILHA *p, Pessoa pessoa){
	p->dados[p->tam] = pessoa;
	p->tam++;
}

void desempilhar(PILHA *p){
	p->tam--;
}

Pessoa topo(PILHA *p){
	return p->dados[p->tam-1];
}
