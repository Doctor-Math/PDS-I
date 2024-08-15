#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int i,n, res=0;
    scanf("%i",&n);
    for(i=1;i<=n;i++){
        res=res+i;
    }
    printf("%i",res);
}
