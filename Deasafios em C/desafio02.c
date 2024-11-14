#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int s = 0, i, v[10];

    srand((unsigned) time(NULL));

    for (i=0; i<10; i++){

        v[i]=rand()%100;

        s+=v[i];

        printf("%d = %d \n", i, v[i]);

    }

    printf("E a soma de todos eles e %d \n", s);


}