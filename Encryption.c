#include <iostream>
#include <stdio.h>
#define LIM 10000


unsigned char criptografa(unsigned char c){
	return (5*c+100)%256;
}

int main(int argc, char** argv) {
	unsigned char msg[10], msg_cod[10];
	int i=0, n=0;
	
	for(i=0;i<9;i++){
		scanf("%c",&msg[i]);
		if(msg[i]=='.'){
			break;
		}
	}
	
	n=i;
	msg[i]='\0';
	
	printf("\nmsg:\n%s",msg);
	printf("\nmsg codificada:\n");
	
	for(i=0;i<n;i++){
		msg_cod[i]=criptografa(msg[i]);
		printf("%c",msg_cod[i]);
	}
	
	return 0;
}
