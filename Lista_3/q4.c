//Questão 04 da Lista 3.
//Alexsandro Leite Figueiredo.

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *vet,x,a,cp,ci;
        scanf("%d",&x);
	vet = (int *) malloc(x);
 	cp=0;
	ci=0;
    
	for(a=0; a < x; a++){
		scanf("%d",&vet[a]);    
	}
 	
	for(a=0; a < x; a++){
		if(vet[a]%2 == 0){
			cp++;		
		}    
		else{
			ci++;
		}
	}
	printf("%d Pares %d impares",cp,ci); 
	printf("\n");

	return 0;
}
