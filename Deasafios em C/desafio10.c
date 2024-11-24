#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // tamanho maximo da pilha

typedef struct { // "Classe" pessoa
	int chave;
	char nome[40];
	int idade;
	int peso;
	double salario;
} Pessoa;

typedef struct{ // Criação da pilha
    Pessoa pessoa[MAX];
    int tamanho;
} Pilha;



void menu();
Pessoa lerDados();
void imprimirDados(Pessoa p);
void iniciarPilha(Pilha *p);
int estaVazia(Pilha *p);
int estaCheia(Pilha *p);
void adicionarPilha(Pilha *p, Pessoa pessoa);
void removerPilha(Pilha *p);
Pessoa mostrarTopo(Pilha *p);

int main(){	
	int op;
    Pilha pilha;
    iniciarPilha(&pilha);

	do{
		menu();
		scanf("%d",&op);
		switch (op)	{
			case 1:{
                if(!estaCheia(&pilha)){
                    adicionarPilha(&pilha, lerDados());
                    printf("Adicionado com sucesso\n");
                }else{
                    printf("Pilha Cheia!!\n");
                    system("pause");
                }
				break;
			}
			case 2:{
                if(!estaVazia(&pilha)){
                    removerPilha(&pilha);
                    printf("Pilha removida com sucesso\n");
                }else{
                    printf("Pilha Vazia!!\n");
                    system("pause");
                }
				break;
			}
			case 3:{
                if(!estaVazia(&pilha)){
                    mostrarTopo(&pilha);
                }else{
                    printf("Pilha Vazia!!\n");
                    system("pause");
                }
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

void iniciarPilha(Pilha *p){
    p->tamanho=0;
}

int estaVazia(Pilha *p){
    if(p->tamanho<=0){
        return 1;
    }else{
        return 0;
    }
}

int estaCheia(Pilha *p){
    if(p->tamanho>=MAX){
        return 1;
    }else{
        return 0;
    }
}

void adicionarPilha(Pilha *p, Pessoa pessoa){
    p->pessoa[p->tamanho] = pessoa;
    p->tamanho++;
}

void removerPilha(Pilha *p){
    p->tamanho--;
}

Pessoa mostrarTopo(Pilha *p){
    return p->pessoa[p->tamanho-1];
}