#include <stdio.h>
#include <stdbool.h>

void main(){

    int a =10;
    if(a > 5 && a > 15){
        printf("a vairiavel a esta entre 5 e 15 ");
    }

        if(a > 5 || a > 15){
        printf("a vairiavel e h maior que 5 ou 15 ");
    }

        if((a > 5 && a < 15) || (a == 20)){
        printf("a vairiavel e h maior que 5 ou 15 ");
    }



}
