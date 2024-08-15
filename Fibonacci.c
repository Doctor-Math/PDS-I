#include<stdio.h>
int main(){
    int i=0, fibonacci[801],i0,i1;
    i0=0;
    i1=1;
    fibonacci[0]=i0;
    fibonacci[1]=i1;
    for(i=2;i<801;i++){
        fibonacci[i]=i0+i1;
        i0=i1;
        i1=fibonacci[i];
    }
    do{
        scanf("%d",&i); 
        if(i>=0 && i<=800){
        printf("\t%d\n",fibonacci[i]);
        }
    }while(i>=0 && i<=800);
}
