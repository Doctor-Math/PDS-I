#include <stdio.h>
#include <stdlib.h>

void somaVetores(int vet1[], int vet2[], int vet3[], int n){
    for(int i=0;i<n;i++){
        vet3[i]=vet1[i]+vet2[i];
    }
    
}

int main(){
    int *vet1, *vet2, *vet3, n;
    scanf("%d",&n);
    vet1=(int*) malloc(n*sizeof(int*));
    vet2=(int*) malloc(n*sizeof(int*));
    vet3=(int*) malloc(n*sizeof(int*));
    
    for(int i=0;i<n;i++){
        scanf("%d",&vet1[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",&vet2[i]);
    }
    
    somaVetores(vet1,vet2,vet3,n);
    
    for(int i=0;i<n;i++){
        printf("%d\n",vet3[i]);
    }
    
    free(vet1);
    free(vet2);
    free(vet3);
    
    
}
