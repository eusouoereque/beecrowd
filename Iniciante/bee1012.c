#include <stdio.h>
 
int main() {
 
    double a, b, c, p, area;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    p = 3.14159;
    
    area = (a * c) / 2;
    
    printf("TRIANGULO: %.3lf\n", area);
    
    area = p * (c * c);
    
    printf("CIRCULO: %.3lf\n", area);
    
    area = (a + b) * c / 2;
    
    printf("TRAPEZIO: %.3lf\n", area);
    
    area = b * b;
    
    printf("QUADRADO: %.3lf\n", area);
    
    area = a * b;
    
    printf("RETANGULO: %.3lf\n", area);
    
    
    return 0;
}