#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int m, n, soma, i;

    scanf("%d %d", &m, &n);

    while (m>0 && n>0){
        soma = 0;
        if(m>0 && n>0){
            if(m > n){
                for (i = n; i <= m; i++){
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
                scanf("%d %d", &m, &n);
            }else{
                for (i = m; i <= n; i++){
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
                scanf("%d %d", &m, &n);
            }
            
        }
        
    }

     
    

    return 0;
}