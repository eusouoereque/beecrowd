#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double valor;
    int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0;
    int moedas1=0, moedas50=0, moedas25=0, moedas10=0, moedas5=0, moedas01=0;

    scanf("%lf", &valor);

    //NOTAS

    printf("NOTAS:\n");

    if (valor >= 100){
        notas100 = valor/100;
        valor = valor - 100*notas100;
    }

    printf("%d nota(s) de R$ 100.00\n", notas100);

    if (valor >= 50){
        notas50 = valor/50;
        valor = valor - 50*notas50;
    }

    printf("%d nota(s) de R$ 50.00\n", notas50);

    if (valor >= 20){
        notas20 = valor/20;
        valor = valor - 20*notas20;
    }

    printf("%d nota(s) de R$ 20.00\n", notas20);

    if (valor >= 10){
        notas10 = valor/10;
        valor = valor - 10*notas10;
    }

    printf("%d nota(s) de R$ 10.00\n", notas10);

    if (valor >= 5){
        notas5 = valor/5;
        valor = valor - 5*notas5;
    }

    printf("%d nota(s) de R$ 5.00\n", notas5);

    if (valor >= 2){
        notas2 = valor/2;
        valor = valor - 2*notas2;
    }

    printf("%d nota(s) de R$ 2.00\n", notas2);

    //MOEDAS

    printf("MOEDAS:\n");

    if (valor >= 1){
        moedas1 = valor/1;
        valor = valor - moedas1;
    }

    printf("%d moeda(s) de R$ 1.00\n", moedas1);

    if (valor >= 0.50){
        moedas50 = valor/0.50;
        valor = valor - 0.50*moedas50;
    }

    printf("%d moeda(s) de R$ 0.50\n", moedas50);

    if (valor >= 0.25){
        moedas25 = valor/0.25;
        valor = valor - 0.25*moedas25;
    }

    printf("%d moeda(s) de R$ 0.25\n", moedas25);

    if (valor >= 0.10){
        moedas10 = valor/0.10;
        valor = valor - 0.10*moedas10;
    }

    printf("%d moeda(s) de R$ 0.10\n", moedas10);

    if (valor >= 0.05){
        moedas5 = valor/0.05;
        valor = valor - 0.05*moedas5;
    }

    printf("%d moeda(s) de R$ 0.05\n", moedas5);

    if (valor >= 0.01){
        moedas01 = valor/(0.01);
        valor = valor - 0.01*moedas01;
    }

    printf("%d moeda(s) de R$ 0.01\n", moedas01);
    

    return 0;
}