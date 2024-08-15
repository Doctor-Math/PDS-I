#include <stdio.h>
#include <string.h>
int main(){
    int i=0,m=0, p=0, k=0,z=0, n=0;
    char S1[100],S2[100];
    fgets(S1,100,stdin);
    fgets(S2,100,stdin);
    
     while(S1[i]!='\0'){
        i++;
    }
    
    while(S2[m]!='\0'){
        m++;
    }
    
    if ((i>0) && (S1[i-1]=='\n')) {
        S1[i-1] = '\0';
        i=i-1;
    }
    z=i;
    
    if ((m>0) && (S2[m-1]=='\n')) {
        S2[m-1] = '\0';
        m=m-1;
    }
     for(i=0;i<z;i++){
         if(n==m){
             break;
         }else if(S1[i]==S2[i+p]){
                 n++;
             }else{
                 n++;
                 p=p-n;
                 n=0;
                 
             }
         
     }
    
    
    if(n==m){
        printf("É substring");
    }else{
        printf("Não é substring");
    }
}
