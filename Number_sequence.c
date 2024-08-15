#include <stdlib.h>
#include <stdio.h>

int main(){
    int x,x0,x1,i,n;
scanf("%i%i%i",&n,&x0,&x1);

printf("X0: %i\n",x0);
printf("X1: %i\n",x1);

for(i=2;i<=n;i++){
    x=4*x1-2*x0;
    printf("X%i: %i\n",i,x);
    x0=x1;
    x1=x;
}
}
