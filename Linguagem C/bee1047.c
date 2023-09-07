#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int hi, mi, hf, mf, th, tm;
    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
    
    if ((mi == mf) && (hi == hf)) {
        tm = mf - mi;
        th = 24;
    }
    
    else {   
        if ((mf - mi) >= 0)
            tm = mf - mi;
        else {
            mf = mf + 60;
            tm = mf - mi;
            hf--;
        }
        
        if ((hf - hi) >= 0)
            th = hf - hi;
        else {
            hf = hf + 24;
            th = hf - hi;
        }
    }    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);


    return 0;
}