#include <stdio.h>
#include <stdlib.h>

int main(){
int AEDS1[1000];
int Calculo1[1000];
int num_alunosA=0,num_alunosC=0, num_mat=0, i, j;
scanf(" %i",&num_alunosA);
for(i=0;i<num_alunosA;i++){
    scanf("%i",&num_mat);
    AEDS1[i]=num_mat;
}
scanf(" %i",&num_alunosC);
for(i=0;i<num_alunosC;i++){
    scanf("%i",&num_mat);
    Calculo1[i]=num_mat;
}
for(i=0;i<num_alunosA;i++){
    for(j=0;j<num_alunosC;j++){
        if(AEDS1[i]==Calculo1[j]){
            printf("%i \n",AEDS1[i]);
        }
    }
}

}
