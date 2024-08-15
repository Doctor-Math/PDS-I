#include <stdio.h>

float conversor (float celsius){
    return celsius*1.8+32;
}
int main(){
    float c,f;
    printf("Digite uma temperatura(ºC):");
    scanf("%f",&c);
    f=conversor(c);
    printf("Fahrenheit: %.0f",f);
}
