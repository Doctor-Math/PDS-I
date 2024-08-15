#include <stdlib.h>
#include <stdio.h>

int main(){
    int i=1,x, mult5=0, mult3=0, mult2=0, multodos=0;
    scanf(" %i",&x);
    
    while(i<=x){
        if(i%2==0){
            mult2++;
        }
        if(i%3==0){
            mult3++;
        }
        if(i%5==0){
            mult5++;
        }
        if(i%2==0 && i%3==0 && i%5==0){
            multodos++;
        }
        i++;
    }
    
    printf("Múltiplos de 2:%i\n",mult2);
    printf("Múltiplos de 3:%i\n",mult3);
    printf("Múltiplos de 5:%i\n",mult5);
    printf("Múltiplos de todos:%i\n",multodos);
}   
