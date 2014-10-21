#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *aloc(int n){
	char *nome;
	nome=malloc(n*sizeof(char));
	return (nome);
}

int main() {
	int a,i;
	char *nome;

	scanf("%d",&a);
	nome=aloc(a);
	printf("digite sua String\n");
	scanf("%s",nome);
	
	for(i = 0; i < a; i++){ 
		if(nome[i] != 'a' && nome[i] != 'e' && nome[i] != 'i' && nome[i] != 'o' && nome[i] != 'u'){	
			printf("%c",nome[i]);
		}
	}
	
	printf("\n");
	return 0;
}
