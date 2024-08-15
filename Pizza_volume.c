#include <stdlib.h> 
#include <math.h> 
#include <stdio.h> 

float area (float raio){
    return raio*raio*3.14;
}

int main(){
    float r,d, areap, areapp;
    printf("Digite o valor do diâmetro da pizza:");
    scanf("%f",&d);
    r=d/2;
    areap=area(r);
    areapp=area(r)/8;
    printf("%.2f \n",areap);
    printf("%.2f",areapp);
}
