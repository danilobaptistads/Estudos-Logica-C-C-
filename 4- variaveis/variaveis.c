#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 5, b;

    printf("%d\n", a);

    //concatenação, %d é usado para ler o conteudo de uma variavel inteira
    printf ("o valor da vatiavel e %d", a);

    //alterar o valor da varial
    a = 15;
    printf ("\nO valor da vatiavel a agora e \n%d", a);

    //lendo entrada do usuario, & diz para a maquina ler a memoria
    scanf ("%d", &b);
    printf ("\nO valor da variavel B e \n%d", b);
}
