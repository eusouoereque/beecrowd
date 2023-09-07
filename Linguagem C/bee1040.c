#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double n1, n2, n3, n4, recuperacao, media;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4)/10;

    printf("Media: %.1lf\n", media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }else if(media >= 5){
        printf("Aluno em exame.\n");
        scanf("%lf", &recuperacao);
        printf("Nota do exame: %.1lf\n", recuperacao);

        media = (media + recuperacao) / 2;

        if(media >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", media);

    }else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}