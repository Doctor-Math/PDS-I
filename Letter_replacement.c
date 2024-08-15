#include <stdio.h>
#include <string.h>

int main(){
    char S[100],c1,c2;
    int i=0, k;
    fgets(S,100,stdin);
    while(S[i]!='\0'){
        i++;
    }
    scanf(" %c",&c1);
    scanf(" %c",&c2);
    for(k=0;k<i;k++){
        if(S[k]==c1){
            S[k]=c2;
            break;
        }
    }
    printf("%s",S);
}
