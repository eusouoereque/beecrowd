#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int dias=0, anos=0, mes=0;

    scanf("%d", &dias);

    if(dias >= 365){
        anos = dias/365;
        dias = dias - anos*365;
    }

    if(dias >= 30){
        mes = dias/30;
        dias = dias - mes*30;
    }

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}