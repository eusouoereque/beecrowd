#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    float preco, total;
    
    scanf("%d %d %f", &cod, &qtd, &preco);
    
    total = qtd * preco;
    
    scanf("%d %d %f", &cod, &qtd, &preco);
    
    total = total + qtd * preco;
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}