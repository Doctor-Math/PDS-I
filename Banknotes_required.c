#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int not100=0, not50=0, not20=0, not10=0, not5=0, not2=0, not1=0, valor=0;
    printf("Por favor, digite um valor em R$:");
    scanf(" %i",&valor);
    
    if(valor>=100){
        not100=valor/100;
        valor=valor%100;
    }
    if(valor>=50){
        not50=valor/50;
        valor=valor%50;
    }
    if(valor>=20){
        not20=valor/20;
        valor=valor%20;
    }
    if(valor>=10){
        not10=valor/10;
        valor=valor%10;
    }
    if(valor>=5){
        not5=valor/5;
        valor=valor%5;
    }
    if(valor>=2){
        not2=valor/2;
        valor=valor%2;
    }
    if(valor>=1){
        not1=valor/1;
    }
    
    printf("100:%i\n50:%i\n20:%i\n10:%i\n5:%i\n2:%i\n1:%i\n",not100,not50,not20,not10,not5,not2,not1);
    
}
