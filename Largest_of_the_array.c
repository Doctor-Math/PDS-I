#include <stdio.h>
#include <stdlib.h>

int main(){
 int matriz[100][100], num_l, num_col,i,j, maior;
 scanf("%i",&num_l);
 scanf("%i",&num_col);
 for(i=0;i<num_l;i++){
     for(j=0;j<num_col;j++){
         scanf("%i",&matriz[i][j]);
     }
 }
 
 maior=matriz[0][0];
 
 for(i=0;i<num_l;i++){
     for(j=0;j<num_col;j++){
         if(maior<matriz[i][j]){
             maior=matriz[i][j];
         }else{
             maior=maior;
         }
     }
 }
 printf("%i",maior);
 
 
}
