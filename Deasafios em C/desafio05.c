#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
#include <locale.h>

void menu();

int preencherVetor(int v[], int t);

void imprimirVetor(int v[], int t);

void maiorVetor(int v[], int t);

void inverteVetor(int v[], int t);

void organizaVetor(int v[], int t);

void contadorVetor(int v[], int t, int n);

int main(){
    int op, vetor[10];

	do{
		menu();
		scanf("%d", &op);
		if(op == 1){
			preencherVetor(vetor, 10);
		}
		else if(op == 2){
			imprimirVetor(vetor, 10);
		}
        else if(op == 3){
            maiorVetor(vetor, 10);
        }
        else if (op == 4){
            inverteVetor(vetor, 10);
        }
        else if (op == 5){
            organizaVetor(vetor, 10);
        }
        else if(op == 6){
            contadorVetor(vetor, 10, 2);
        }
		
	}while(op!=0);

}

void menu(){

	system("cls");
	printf("Digite uma opcao:\n");
	printf("1 - Preencher o Vetor\n");
	printf("2 - Imprimir o Vetor\n");
	printf("3 - Maior numero do Vetor\n");
	printf("4 - inverter o Vetor\n");
	printf("5 - organizar Vetor\n");
	printf("6 - contar repetições Vetor\n");
	printf("0 - Sair\n");

}

int preencherVetor(int v[], int t){
	int i;
	srand((unsigned) time(NULL));
	for(i = 0; i < t; i++){
		v[i] = rand()%5;
	}
    return v[t];
}

void imprimirVetor(int v[], int t){
	int i;
	for(i=0; i<t; i++){	
		printf("vetor[%d] = %d \n", i+1, v[i]);
	}
	system("pause");
}

void maiorVetor(int v[], int t){
    int i, maior;
    maior = v[0];
    for(i=1; i<t; i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    printf("O maior Valor do vetor é %d \n", maior);
    system("pause");
}

void inverteVetor(int v[], int t){
    int i;
    for (i=(t-1); i>=0; i--){
        printf("vetor[%d] = %d \n", t-i, v[i]);
    }
    system("pause");

}

void organizaVetor(int v[], int t){
    int i, b, c;
    for (i=0; i<t; i++){
        for (b=0; b<t; b++){
            if (v[i]>v[b]){
                c = v[i];
                v[i] = v[b];
                v[b] = c;
            }
        }
    }
    for (i=0; i<t; i++){
        printf("Vetor[%d] = %d\n", i+1, v[i]);
    }
    system("pause");


}

void contadorVetor(int v[], int t, int n){
    int i, b;
    b = 0; 
    for (i=0; i<t; i++){
        if(v[i]==n){
            b++;
        }
    }
    printf("O numero %d se reptere %d vezes\n", n, b);
    system("pause");
}