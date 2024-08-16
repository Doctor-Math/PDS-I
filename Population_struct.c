#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 4

typedef struct{
	float salario;
	float idade;
	float numfilhos;
} dados;

void inserir(dados *d){
	int i;
	for(i=0;i<MAX;i++){
		scanf("%f %f %f",&d[i].salario,&d[i].idade,&d[i].numfilhos);
		getchar();
	}
}

float mediasalario(dados *d){
	int i;
	float medsalpop=0;
	for(i=0;i<MAX;i++){
		medsalpop=medsalpop+d[i].salario;
	}
	medsalpop=medsalpop/MAX;
	
	printf("Media salarial da populacao: R$%.2f\n",medsalpop);
	
}

float mediafilho(dados *d){
	float medfipop=0;
	int i;
	for(i=0;i<MAX;i++){
		medfipop=medfipop+d[i].numfilhos;
	}
	medfipop=medfipop/MAX;
	
	printf("Media de filhos da populacao: %.2f\n",medfipop);
	
}

float maiorsalario(dados *d){
	int i;
	float maior;
	maior=d[0].salario;
	
	for(i=1;i<MAX;i++){
		if(d[i].salario>maior){
			maior=d[i].salario;
		}
	}
	printf("Maior salario: R$%.2f\n",maior);
}

float maiorque1000(dados *d){
	int i;
	float perc, k=0;
	for(i=0;i<MAX;i++){
		if(d[i].salario>1000){
			k++;
		}
	}
	perc=k/MAX*100;
	printf("Percentual de salarios superiores a 1000: %.2f%\n",perc);
}

int main() {
	dados d[MAX];
	inserir(d);
	mediasalario(d);
	mediafilho(d);
	maiorque1000(d);
	maiorsalario(d);
}
