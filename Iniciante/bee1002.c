#include <stdio.h>
 
int main() {
    
    //declarando variaveis
    double area, raio, n;
    
    //atribuindo valores
    n = 3.14159;
    scanf("%lf", &raio);
    
    //processamento
    area = (raio * raio) * n;
    
    //saida de dados
    printf("A=%.4lf\n", area);
 
    return 0;
}