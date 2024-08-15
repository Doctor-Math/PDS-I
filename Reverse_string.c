#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int i=0, j;
    fgets(s,100,stdin);
    while(s[i]!='\0'){
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%c",s[j]);
    }
}
