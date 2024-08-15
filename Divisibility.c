#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x=0,y=0,z=0;
    printf("Digite um número:");
    scanf(" %i",&x);
    printf("Digite outro número:");
    scanf(" %i",&y);
    printf("Digite um último número:");
    scanf(" %i",&z);
    
    if(x%y==0 && x%z==0){
        printf("O número é divisível");
    }
    else {
        printf("O número não é divisível");
    }
}
