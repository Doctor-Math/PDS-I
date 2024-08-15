#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_l, num_col, matriz[100][100],i,j;
    scanf("%i",&num_l);
    scanf("%i",&num_col);
    for(i=0;i<num_l;i++){
        for(j=0;j<num_col;j++){
            scanf("%i",&matriz[i][j]);
        }
    }
    
    for(i=0;i<num_l;i++){
        for(j=0;j<num_col;j++){
            printf(" %i",matriz[i][j]*-1);
        }
        printf("\n");
}
}
