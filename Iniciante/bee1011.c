#include <stdio.h>
 
int main() {
 
    double raio, p, volume;
    p = 3.14159;
    scanf("%lf", &raio);
    
    volume = (4.0/3)*p*(raio*raio*raio);
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}