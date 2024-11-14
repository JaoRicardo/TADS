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
	int inicio;
	int tam;
}FILA;

void menu();
Pessoa lerDados();
void imprimirDados(Pessoa p);
void iniciarFila(FILA *f);
int isEmpty(FILA *f);
int isFull(FILA *f);
void inserir(FILA *f, Pessoa d);
void remover(FILA *f);
void listarFila(FILA *f);

int main(){	
	int op, ol;
	Pessoa pasta;
	
	FILA fila, filaP;
	iniciarFila(&fila);
	iniciarFila(&filaP);
	
	do{
		menu();
		scanf("%d",&op);
		switch (op)	{
			case 1:{
				pasta = lerDados();
				if(pasta.idade>=60){
					if(!isFull(&filaP)){
						inserir(&filaP,pasta);
					}else{
						printf("Fila Prioritaria cheia!!!\n Inserindo na fila normal\n");
						if(!isFull(&fila)){
						inserir(&fila,pasta);
						}
						else{
							printf("Fila Normal cheia!!!");
							system("pause");
						}
					}
				}else{
					if(!isFull(&fila)){
						inserir(&fila,pasta);
					}
					else{
						printf("Fila Normal cheia!!!");
						system("pause");
					}
				}
				break;
			}
			case 2:{
				printf("De qual fila você deseja remover\n1.Fila Prioritaria\n2.Fila Normal\n");
				scanf("%d",&ol);
				if(ol==1){
					if(!isEmpty(&filaP)){
						remover(&filaP);
					}else{
						printf("Fila Prioritaria vazia !!!\n");
						system("pause");
					}
				}else if(ol == 2){
					if(!isEmpty(&fila))
						remover(&fila);
					else{
						printf("Fila Normal vazia!!!\n");
						system("pause");
					}
				}
				break;
			}
			case 3:{
				printf("\nLista Prioritaria\n");
				if(!isEmpty(&filaP)){
					listarFila(&filaP);
				}
				else{
					printf("Fila vazia!!!\n");
				}
				printf("\nLista normal\n");
				if(!isEmpty(&fila)){
					listarFila(&fila);
				}
				else{
					printf("Fila vazia!!!");
				}
				system("pause");
				break;
			}
			case 4:{
				break;
			}
		}
	}while(op!=0);
}

void menu(){
	system("cls");
	printf("Digite uma opcao:\n");
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Listar\n");
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
	printf("Salario:%.2lf\n", p.salario);		
}

void iniciarFila(FILA *f){
	f->tam = 0;
	f->inicio = 0;
}

// resultado de teste logico verdadeiro sempre e' 1

int isEmpty(FILA *f)	{
	if(f->tam == 0) return 1;
	else return 0;
}

int isFull(FILA *f)	{
	if(f->tam == MAX) return 1;
	else return 0;
}

void inserir(FILA *f, Pessoa d){
	f->dados[(f->tam + f->inicio)%MAX] = d;
	f->tam++;
}

void remover(FILA *f){
	f->tam--;
	f->inicio = (f->inicio + 1)%MAX;
}


void listarFila(FILA *f){
	int i,j;
	
	for (i=0, j=f->inicio ; i < f->tam; i++, j=(++j%MAX)){
		imprimirDados(f->dados[j]);
	}
}