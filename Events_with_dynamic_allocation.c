#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
} Mes;


typedef struct{
    int dia;
    Mes mes;
    int ano;
}Data;

typedef struct{
    char nome[100];
    char local[100];
    Data data;
}Evento;

void cadastrar_eventos(Evento agenda[], int n){
    int mes;
    for(int i=0;i<n;i++){
        scanf("%s %s %d %d %d",agenda[i].nome,agenda[i].local,&agenda[i].data.dia,&mes,&agenda[i].data.ano);
        agenda[i].data.mes = (Mes)mes;
    }
}

void imprimir_eventos(Evento agenda[],Data d,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(d.dia==agenda[i].data.dia && d.mes==agenda[i].data.mes && d.ano==agenda[i].data.ano){
            flag=1;
            printf("%s %s\n",agenda[i].nome,agenda[i].local);
        }
    }
        if(!flag){
            printf("Nenhum evento encontrado!");
        }
    }

int main(){
    int n, dia, mes, ano;
    Evento *agenda;
    Data d;
    
    scanf("%d",&n);
    
    agenda=(Evento*)malloc(n*sizeof(Evento*));
    
    cadastrar_eventos(agenda,n);
    
    scanf("%d %d %d",&d.dia,&mes,&d.ano);
    d.mes=(Mes)mes;
    
    imprimir_eventos(agenda,d,n);
    
    free(agenda);
    
  
}
