#define FALSE 0
#define TRUE 1
#include <stdio.h>
int main(){
    int i, j, a, b, primo[10000];
    for(i=2;i<10000;i++){
        primo[i]=i;
    }
    for(i=2;i<10000;i++){
        if(primo[i]){
            for(j=i+i;j<10000;j+=i){
                primo[j]=FALSE;
            }
        }
    }
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        if(primo[i]!=FALSE){
        printf("%d\n",primo[i]);
        }
    }
}
