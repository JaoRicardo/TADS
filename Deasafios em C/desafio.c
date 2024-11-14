#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int organiza(int lista[]);


int main(){
    int i, a[10]; //Criação de variaveis

    srand((unsigned) time(NULL)); // inicializando a geração de numeros aleatórios

    for (i=0; i<10; i++){ 

        a[i]=rand()%101; // colocando numeros aleatórios dentro do array

        printf("%d = %d \n", i, a[i]); //Mostrando qual numero está em cada posição
    }

    organiza(a[10]);

    for(i=0; i<10; i++){
    printf("%d = %d \n",i, a[i]); //Exibi os numeros ordenados
    }

}

void organiza(int lista[]){
    int i, c, b;

    for(i=0; i<10; i++){ 
        for(b=0; b<10; b++){ //criação dupla para verificar todos os numeros comparado a um

            if(lista[i]<lista[b]){ //Vai pegar o primeiro numero do array com todos dele mesmo e vai colocar o menor na
                            //primeira posição
                
                c = lista[i]; //Salva o valor que estava sendo comparado
                lista[i] = lista[b]; //transforma o valor menos no numeor que estava sendo comparado
                lista[b] = c; //coloca de volta o valor que tinha sido retirado

            }
        }
    }
}