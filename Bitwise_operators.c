#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mult, n=0, divi;
    scanf(" %i",&n);
    mult=n<<1;
    divi=n>>1;
    printf("%i\n%i", mult, divi);
}
