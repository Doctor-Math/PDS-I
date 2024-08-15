#include <stdio.h>
#include <string.h>
#define MAX 5

struct ende{
    char rua[50];
    unsigned int numero;
    char estado[50];
};

typedef struct{
	char nome[50];
	unsigned int idade;
	float salario;
	struct ende endereco;
} banco;

void inserir(banco *bd, int *i){
	char n[50],r[50],e[50];
    unsigned int id, num;
    float s;
    
	scanf("%s %u %f %s %u %s",n,&id,&s,r,&num,e);
	getchar();
	if(*i<MAX){
	strcpy(bd[*i].nome, n);
	bd[*i].idade = id;
    bd[*i].salario = s;
    strcpy(bd[*i].endereco.rua, r);
    bd[*i].endereco.numero = num;
    strcpy(bd[*i].endereco.estado, e);
    
	printf("Registro %s %u %.2f %s %u %s inserido \n", bd[*i].nome, bd[*i].idade, bd[*i].salario, bd[*i].endereco.rua,bd[*i].endereco.numero,bd[*i].endereco.estado);
	(*i)++;
	}else{
	printf("Espaco insuficiente\n");
    }

}

void mostrar(banco *bd){
	int j;
	char n[50];
	scanf("%s",n);
	getchar();
	
	for(j=0;j<MAX;j++){
		if(strcmp(bd[j].nome,n)==0){
			printf("Registro %s %u %.2f %s %u %s\n", bd[j].nome, bd[j].idade, bd[j].salario,bd[j].endereco.rua,bd[j].endereco.numero,bd[j].endereco.estado);
                    break;
		}
	}
	
	if(j==MAX){
		printf("Registro ausente\n");
	}
}

void alterar(banco *bd){
	int j;
	char n[50],r[50],e[50];
    unsigned int id, num;
    float s;
	scanf("%s %u %f %s %u %s",n,&id,&s,r,&num,e);
	getchar();
	
	for(j=0;j<MAX;j++){
		if(strcmp(bd[j].nome,n)==0){
		    bd[j].idade = id;
            bd[j].salario = s;
            strcpy(bd[j].endereco.rua, r);
            bd[j].endereco.numero = num;
            strcpy(bd[j].endereco.estado, e);
			printf("Registro %s %u %.2f %s %u %s alterado\n", bd[j].nome, bd[j].idade, bd[j].salario,bd[j].endereco.rua,bd[j].endereco.numero,bd[j].endereco.estado);
            break;
		}
	}
	
	if(j==MAX){
		printf("Registro ausente para alteracao\n");
	}
}

int main() {
	int i=0;
	char operacao[8];
	banco dados[MAX];
	
	do{
	fgets(operacao, sizeof(operacao), stdin);
    operacao[strcspn(operacao, "\n")] = '\0';
    
	if (strlen(operacao) == 0 || strcmp(operacao, " ") == 0) {
            break;
        }
        
	if(strcmp(operacao,"inserir")==0){
		inserir(dados,&i);
	}
	
	if(strcmp(operacao,"mostrar")==0){
		mostrar(dados);
	}
	
	if(strcmp(operacao,"alterar")==0){
		alterar(dados);
	}
	
}while(1);

}
