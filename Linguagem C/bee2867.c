#include <stdio.h>
#include <math.h>

int main(){

    int i, t, n1, n2;
    
    scanf("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%d %d", &n1, &n2);
        printf("%.f\n", (floor(n2 * log10(n1))) + 1);
    }

    return 0;
}