#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void media(double vet[], int n, int *i){
    double media=0, distancia, menor;
    int j;
    
    for(j=0;j<n;j++){
        media+=vet[j];
    }
    media/=n;
    
    distancia=abs(media-vet[0]);
    menor=distancia;
    *i=0;
    for(j=1;j<n;j++){
        distancia=abs(media-vet[j]);
        if(distancia<menor){
            menor=distancia;
            *i=j;
        }
        
        
    }
    
    
    
    
}

int main(){
    int n,j,*i;
    double* vet;

    scanf("%d",&n);
    vet=(double*) malloc(n*sizeof(double*));
    
    for(j=0;j<n;j++){
        scanf("%lf",&*(vet+j));
    }
    
    media(vet,n,i);
    printf("%d",*i);
}
