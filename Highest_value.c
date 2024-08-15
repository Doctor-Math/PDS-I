#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int calculador(int a, int b, int c){
    int max;
    if(a>b){
        max=a;
    }else {
        max=b;
    }
    if(max>c){
        max=max;
    }else{
        max=c;
    }
    return max;
}
int main(){
   int n1=0, n2=0, n3=0, maior;
    scanf(" %i", &n1);
    scanf(" %i", &n2);
    scanf(" %i", &n3);
   maior=calculador(n1,n2,n3);
   printf("%i",maior);
}
