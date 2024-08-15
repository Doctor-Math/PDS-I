#include <stdio.h>
#include <string.h>
#define MAX 8

typedef struct{
    char nome[50];
    char marca[50];
    float preco;
}banco;

void inserir(banco *p){
    int i;
    for(i=0;i<MAX;i++){
        scanf("%s %s %f",p[i].nome,p[i].marca,&p[i].preco);
        getchar();
    }
}

float mediatotal(banco *p){
    float media=0;
    int i;
    for(i=0;i<MAX;i++){
        media+=p[i].preco;
    }
    return media/MAX;
}

float quantidade(banco *p){
    int i,j,k, v;
    for(i=0;i<MAX;i++){
        v=0;
        for(j=0;j<i;j++){
                    if(strcmp(p[i].marca,p[j].marca)==0){
                        v=1;
                        break;
                    }
            }
            if(!v){
            k=0;
        for(j=0;j<MAX;j++){
                if(strcmp(p[i].marca,p[j].marca)==0){
                    k++;
                }
        }
        printf("%s %d\n",p[i].marca,k);
    }
}
}

float mediaproduto(banco *p){
    int i,j,k,v;
    float valorprod, mediaprod;
    for(i=0;i<MAX;i++){
        v=0;
        for(j=0;j<i;j++){
                    if(strcmp(p[i].marca,p[j].marca)==0){
                        v=1;
                        break;
                    }
            }
            if(!v){
            k=0;
            valorprod=0;
        for(j=0;j<MAX;j++){
                if(strcmp(p[i].marca,p[j].marca)==0){
                    k++;
                    valorprod+=p[j].preco;
                }
        }
        mediaprod=valorprod/k;
        printf("media %s %.2f\n",p[i].marca,mediaprod);
    }
}
}

int main(){
    banco prod[MAX];
    
    inserir(prod);
    quantidade(prod);
    printf("media total %.2f\n",mediatotal(prod));
    mediaproduto(prod);

}
