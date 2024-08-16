#include <stdio.h>
#include <stdlib.h>
#define m 5
#define n 4
	
void inserir(int *a, int*b){
	int i;
	//Leitura dos vetores
    for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void ordenar(int *a, int*b, int*c){
	int i, j, k;
	//Caso m>n, o vetor final será inicialmente preenchido com o conteúdo de b[m]
	if(m>n){
	for(i=0;i<m;i++){
	c[i]=b[i];
}
    // O restante do vetor será preenchido com zero
    for(i=m;i<m+n;i++){
    	c[i]=a[n-1];
	}
	
	//Contamos quantas posições de c são menores que a[k] até descobrir o índice que deve receber a[k]. Isto se repetirá para cada elemento de a
	for(k=0;k<n;k++){
	j=0;
	while(a[k]>c[j]){
	j++;
	}
	// Descoberto o índice, transladamos os elementos à frente, a partir do índice, em uma casa, para liberar espaço em c[j]
	for(i=(m+n)-2;i>=j;i--){
	c[i+1]=c[i];
	}
	//Por fim, inserimos a[k] no vetor
	c[j]=a[k];
	}
}
	
	//Caso n>m, o vetor final será inicialmente preenchido com o conteúdo de a[n] e o mesmo processo se repete...
	if(n>m){
	for(i=0;i<n;i++){
	c[i]=a[i];
}
    for(i=n;i<m+n;i++){
    	c[i]=b[m-1];
	}
	
	for(k=0;k<m;k++){
	j=0;
	while(b[k]>=c[j]){
	j++;
	}
	for(i=(m+n)-2;i>=j;i--){
	c[i+1]=c[i];
	}
	c[j]=b[k];
	}
}
	

}



void apresentar(int *c){
	int i;
	//Apresentamos o novo vetor ordenado
	for(i=0;i<(m+n);i++){
		printf("%d ",c[i]);
	}
}

int main() {
	int a[n], b[m], c[m+n];
	inserir(a,b);
	ordenar(a,b,c);
	apresentar(c);
}
