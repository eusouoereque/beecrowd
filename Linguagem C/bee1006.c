#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
    
    scanf("%lf %lf %lf", &a, &b , &c);
    
    media = a * 0.2 + b * 0.3 + c * 0.5;
    
    printf("MEDIA = %.1lf", media);
    printf("\n");
    
    return 0;
}