#include <stdio.h>

int main(){
    float poup=500;
    int mes;
    
    for (mes=1;mes<5;mes++)
    {
        if (mes==1)
        {
         poup=poup*1.01;   
        }
        if (mes==2)
        {
            poup=poup+200;
            poup=poup*1.01;
        }
        if (mes==3)
        {
            poup=poup-50;
        }
        if (mes==4)
        {
            poup=poup*1.01;
        }
    }
    printf("O valor da poupança é R$%.2f",poup);
}
