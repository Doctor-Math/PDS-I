#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz, linhas, colunas, i, j;
    
    scanf("%d",&linhas);
    scanf("%d",&colunas);
    
    matriz=malloc(linhas*sizeof(int*));
    
    for(i=0;i<linhas;i++){
        matriz[i]=malloc(colunas*sizeof(int*));
        for(j=0;j<colunas;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<linhas;i++){
    free(matriz[i]);
    }
    free(matriz);
}
