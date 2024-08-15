#include <stdio.h>
#include <string.h>

int main(){
    char S[100], c;
    int i=0, k, cont=0;
    fgets(S,100,stdin);
    scanf("%c",&c);
    while(S[i]!='\0'){
        i++;
    }
    for(k=0;k<i;k++){
        if(S[k]==c){
            cont++;
        }
    }
    printf("%d",cont);
}
