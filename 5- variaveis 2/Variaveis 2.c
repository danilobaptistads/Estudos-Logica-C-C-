#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int a;
    float b;
    char c;
    bool d;

    a =5 ;
    b = 2.3;
    c = 'da';
    d = true;

    printf("\n valor da variavel b eh %f\n",b);
    printf("\n valor de variavel b eh %.2f\n",b);
    printf("\n valor de variavel c eh %c\n",c);
    printf("\n valor de variavel d eh %d\n",d);
    printf("Ecreva uma letra:\n");
    scanf(" %c", &c); // O espaço antes do tipo de varivel,é para limpar o buffer do teclado.
    printf("o que voce escreveu eh %c\n",c);
    system("pause");
}
