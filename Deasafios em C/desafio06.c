#include <stdio.h>
#include <stdlib.h>

void sacar(float valor, float *saldo);

void depositar(float valor, float *saldo);

int main(){
    float sac, s;
    int op=1;
    s = 0;

    while (op !=0){
        printf("1 - Sacar\n2 - Depositar\n");
        scanf("%d", &op);

        if (op == 1){
            printf("Me informe o vamor que sacado\n");
            scanf("%f", &sac);
            sacar(sac, &s);
        }
        else if(op == 2){
            printf("Me informe o deposito\n");
            scanf("%f", &sac);
            depositar(sac, &s);
        }
    }
    
    
}

void sacar(float valor, float *saldo){

        if(*saldo == 0){
            printf("Seu saldo e 0 seu macaco\n");
        }
        else if (*saldo<valor){
            printf("Tá tentando sacar mais do que tem na conta seu burro\n");
        }
        else if(*saldo>=valor){
            *saldo -= valor;
            printf("Voce sacou\n Seu saldo atual e %f reais\n", *saldo);
        }

}

void depositar(float valor, float *saldo){

    *saldo += valor;
    printf("Seu saldo foi atualizado par %f reais\n", *saldo);

}