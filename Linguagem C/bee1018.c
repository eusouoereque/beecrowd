#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int valor;
    int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0, notas1=0;

    scanf("%d", &valor);

    //NOTAS

    printf("%d\n", valor);

    if (valor >= 100){
        notas100 = valor/100;
        valor = valor - 100*notas100;
    }

    printf("%d nota(s) de R$ 100,00\n", notas100);

    if (valor >= 50){
        notas50 = valor/50;
        valor = valor - 50*notas50;
    }

    printf("%d nota(s) de R$ 50,00\n", notas50);

    if (valor >= 20){
        notas20 = valor/20;
        valor = valor - 20*notas20;
    }

    printf("%d nota(s) de R$ 20,00\n", notas20);

    if (valor >= 10){
        notas10 = valor/10;
        valor = valor - 10*notas10;
    }

    printf("%d nota(s) de R$ 10,00\n", notas10);

    if (valor >= 5){
        notas5 = valor/5;
        valor = valor - 5*notas5;
    }

    printf("%d nota(s) de R$ 5,00\n", notas5);

    if (valor >= 2){
        notas2 = valor/2;
        valor = valor - 2*notas2;
    }

    printf("%d nota(s) de R$ 2,00\n", notas2);

    if (valor >= 1){
        notas1 = valor/1;
        valor = valor - 1*notas1;
    }

    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;

}