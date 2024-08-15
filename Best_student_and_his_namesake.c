#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct{
    char nome[50];
    char sobrenome[50];
    unsigned int matricula;
    float notaPDS1;
    float notaGAAL;
    float notaCalc1;
} alunos;

void inserir(alunos *t){
    int i;
    for(i=0;i<MAX;i++){
        scanf("%s %s %u %f %f %f",t[i].nome,t[i].sobrenome,&t[i].matricula,&t[i].notaPDS1,&t[i].notaGAAL,&t[i].notaCalc1);
        getchar();
    }
}

void copiaAluno(alunos *a, alunos *t){
	strcpy(a->nome,t->nome);
    strcpy(a->sobrenome,t->sobrenome);
    a->matricula=t->matricula;
    a->notaPDS1=t->notaPDS1;
    a->notaGAAL=t->notaGAAL;
    a->notaCalc1=t->notaCalc1;
}

void piorAluno(alunos *t, alunos *a2){
    int i,j;
    float media;
    
    copiaAluno(a2,&t[0]);
  
    for(i=1;i<MAX;i++){
        if((t[i].notaPDS1+t[i].notaGAAL+t[i].notaCalc1)<(a2->notaPDS1+a2->notaGAAL+a2->notaCalc1)){
            copiaAluno(a2,&t[i]);
            
        }else if((t[i].notaPDS1+t[i].notaGAAL+t[i].notaCalc1)==(a2->notaPDS1+a2->notaGAAL+a2->notaCalc1)){
            if(t[i].notaPDS1<a2->notaPDS1){
                copiaAluno(a2,&t[i]);
                
            }else if(t[i].notaPDS1==a2->notaPDS1){
                if(t[i].notaGAAL<a2->notaGAAL){
                copiaAluno(a2,&t[i]);
                
        } else if(t[i].notaGAAL==a2->notaGAAL){
                if(t[i].matricula<a2->matricula){
                copiaAluno(a2,&t[i]);
        }
    }  
}
}
}
}

void melhorAluno(alunos *t, alunos *a){
    int i, j;
    float media;
    
    copiaAluno(a,&t[0]);
  
    
    for(i=1;i<MAX;i++){
        if((t[i].notaPDS1+t[i].notaGAAL+t[i].notaCalc1)>(a->notaPDS1+a->notaGAAL+a->notaCalc1)){
                copiaAluno(a,&t[i]);
            
        }else if((t[i].notaPDS1+t[i].notaGAAL+t[i].notaCalc1)==(a->notaPDS1+a->notaGAAL+a->notaCalc1)){
            if(t[i].notaPDS1>a->notaPDS1){
                copiaAluno(a,&t[i]);
            }else if(t[i].notaPDS1==a->notaPDS1){
                if(t[i].notaGAAL>a->notaGAAL){
                copiaAluno(a,&t[i]);
        } else if(t[i].notaGAAL==a->notaGAAL){
                if(t[i].matricula>a->matricula){
                copiaAluno(a,&t[i]);
        }
    }
    
}
}
}
media=(a->notaPDS1+a->notaGAAL+a->notaCalc1)/3;

printf("Melhor Aluno: %s %s\nMatrícula: %u\nMédia: %.2f\n",a->nome, a->sobrenome, a->matricula, media);
}

void encontraXara(alunos *t, alunos *a, alunos *a2){
    int i, v=0;
    for(i=0;i<MAX;i++){
        if(strcmp(a->nome,t[i].nome)==0 && strcmp(a->sobrenome,t[i].sobrenome)!=0){
            if(t[i].notaPDS1>=60 && t[i].notaGAAL>=60 && t[i].notaCalc1>=60){
                 printf("Situação: O melhor aluno é amigo do seu xará");
            } else if(strcmp(a2->nome,t[i].nome)==0 && strcmp(a2->sobrenome,t[i].sobrenome)==0){
                printf("Situação: O melhor aluno quer mudar de nome");
            }else if(t[i].notaPDS1<60 || t[i].notaGAAL<60 || t[i].notaCalc1<60){
                 printf("Situação: O melhor aluno evita seu xará");
            }
            v=1;
            break;
        }
    }
    
    if(!v){
        printf("Situação: O melhor aluno não tem xará");
    }
}


int main(){
    alunos turma[MAX], alunoMelhor, alunoPior;

    inserir(turma);
    piorAluno(turma,&alunoPior);
    melhorAluno(turma,&alunoMelhor);
    encontraXara(turma, &alunoMelhor, &alunoPior);    
}
