#include <stdio.h>
#include <stdbool.h>
//usando tabela asc, mutando o tipo de invoca��o da cariavel para inteiro %d � possivel imprimir o codigo asc
char letra = 'x';
void main(){
    if(letra == 120){
        printf("\nA letra eh %c com ASC %d.\n", letra, letra);
    }
}
