#include <stdio.h>
#include <stdlib.h>


int main(){
    struct Penis{
        float espessura;
        float tamanho;
        char nome[20];
    }p1, p2;
    do{
    printf("Espessura: ");
    scanf("%f", &p1.espessura);
    }while(p1.espessura<0);
    printf("Tamanho: ");
    scanf("%f", &p1.tamanho);
    printf("Nome: ");
    scanf("%s", &p1.nome);
    puts("Oaooao");

    printf("Tamanho: %f\n Espessura %f\n Nome: %s", p1.tamanho, p1.espessura, p1.nome);


}
