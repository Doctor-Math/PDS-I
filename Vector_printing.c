#include <stdio.h>
#include <stdlib.h>

void leituraVetor(int vet[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
}

int main(){
    int n, *vet;
    
    scanf("%d",&n);
    vet=(int*) malloc(n*sizeof(int*));
    leituraVetor(vet,n);
    
    for(int i=0;i<n;i++){
        printf("%d\n",vet[i]);
    }
    
    free(vet);
    
}
