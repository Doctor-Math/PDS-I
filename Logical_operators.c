#include <stdlib.h>
#include <stdio.h>

int main() {
    int A,B, AND, OR, XOR;
    scanf("%d",&A);
    scanf("%d",&B);
    AND=A&B;
    OR=A|B;
    XOR=A^B;
    printf("AND:%d OR:%d XOR:%d",AND,OR,XOR);
}
