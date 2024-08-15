#include <stdio.h>
#include <stdlib.h>
#define ID_X 10

int main(){ 
    
int X[ID_X],Y[ID_X],i=0,j=0;

for(i=0;i<ID_X;i++){
    scanf("%i",&X[i]);
}

for(j=0;j<ID_X;j++){
for(i=0;i<ID_X-j;i++){
Y[j]=X[i];
    }
}
for(j=0;j<ID_X;j++){
    printf("%i\n",Y[j]);
}
}
