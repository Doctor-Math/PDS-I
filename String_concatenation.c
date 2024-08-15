#include <stdio.h>
#include <string.h>
int main(){
    char S1[100], S2[100];
    int i=0, j=0, k;
    fgets(S1,100,stdin);
    fgets(S2,100,stdin);
    while(S1[i]!='\0'){
        i++;
    }
    while(S2[j]!='\0'){
        j++;
    }
    if ((i>0) && (S1[i-1]=='\n')) {
        S1[i-1] = '\0';
        i=i-1;
    }
    if ((j>0) && (S2[j-1]=='\n')) {
        S2[j-1] = '\0';
        j=j-1;
    }
   
    for(k=0;k<=j;k++){
        S1[i+k]=S2[k];
    }
    printf("%s",S1);
}
