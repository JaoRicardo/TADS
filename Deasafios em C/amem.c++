#include <stdio.h>

int main(){
    int i;
    int x = 2;
    int array[10];
    for(i=0; i<10; i++, x=x+2){
        array[i]=x;
        printf("na posicao %d esta armazenado o valor %d\n", i, array[i] );
    }
    puts("Ixi mano");


}

