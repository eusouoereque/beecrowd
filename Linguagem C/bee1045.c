#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if ((a >= b && a >= c) || (b >= a && b >= c) || (c >= b && c >= a)){
        if ((a >= b+c) || (b >= a+c) || (c >= b+a)){
            printf("NAO FORMA TRIANGULO\n");
        }else if ((pow(a,2) == pow(b,2)+pow(c,2)) || (pow(b,2) == pow(a,2)+pow(c,2)) || (pow(c,2) == pow(b,2)+pow(a,2))){
            printf("TRIANGULO RETANGULO\n");
        }else if ((pow(a,2) > pow(b,2)+pow(c,2)) || (pow(b,2) > pow(a,2)+pow(c,2)) || (pow(c,2) > pow(b,2)+pow(a,2))){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if ((pow(a,2) < pow(b,2)+pow(c,2)) || (pow(b,2) < pow(a,2)+pow(c,2)) || (pow(c,2) < pow(b,2)+pow(a,2))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((a == b && a == c) || (b == a && b == c) || (c == b && c == a)){
            printf("TRIANGULO EQUILATERO\n");
        }else if ((a == b || a == c || b == c) || (b == a || b == c || a == c) || (c == b || c == a || b == a)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}