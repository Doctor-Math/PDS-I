long int conversor(long int anos){
        return anos*8760;
}

int main(){
    long int a, h;
    printf("Digite um número de anos:");
    scanf("%ld",&a);
    h=conversor(a);
    printf("%ld",h);
}
