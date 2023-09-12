#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double a, b, c, raiz1=0, raiz2=0, delt, delta=0;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - (4 * a * c);
    delt = sqrt(delta);
    if ((delt >= 0) && (a != 0)){
        raiz1 = (-b + delt) / (2 * a);

        raiz2 = (-b - delt) / (2 * a);

        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
        
    }else{
        printf("Impossivel calcular\n");
    }

    return 0;
}