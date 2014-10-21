//Questão 03 da Lista 3.
//Alexsandro Leite Figueiredo.

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *vet,x,a;
        
	vet = (int *) malloc(5); //letra a)
 	printf("Digite 5 Numeros");   
	for(a=0; a < 5; a++){
		scanf("%d",&vet[a]); //letra b)   
	}
 	for(a=0; a < 5; a++){
		printf("%d ",vet[a]);  //letra c)  
	}
    
	free(vet); // letra d)
	printf("\n");
	
	return 0;
}
