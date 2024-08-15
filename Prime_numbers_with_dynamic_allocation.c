#define FALSE 0
#define TRUE 1
#include <stdio.h>
#include <stdlib.h>

void primos(int m, int *p1, int *p2){
    int i,j,k=0,tam,*primo,*primos;
    
    tam=m*m;
    
    primo=(int *)malloc(tam*sizeof(int));
    primos=(int *)malloc(tam*sizeof(int));
    
    for(i=2;i<tam;i++){
        primo[i]=i;
    }
    for(i=2;i<tam;i++){
        if(primo[i]){
            for(j=i+i;j<2*m;j+=i){
                primo[j]=FALSE;
            }
        }
    }
    for(i=2;i<tam;i++){
        if(primo[i]!=FALSE){
        primos[k]=primo[i];
        k++;
        }
    }
    
    for(i=2;i<k;i++){
        if(primos[i]<m){
            p1=&primos[i];
        }
        if(primos[i]>m){
            p2=&primos[i];
            break;
        }
    }
    
    printf("%d\n",*p1);
    printf("%d",*p2);
    
    free(primo);
    free(primos);
}

int main(){
    int m, p1,p2;
    
    scanf("%d",&m);
    
    primos(m,&p1,&p2);
    
}
