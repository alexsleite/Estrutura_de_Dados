//Questão 02 da Lista 3.
//Alexsandro Leite Figueiredo.

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *vet,x,a,n,i;
        n=1;
	i=0;
	x=1;
		 
    	while(n>0){
		scanf("%d",&n);
		vet =(int *) realloc( vet, x*sizeof(int) );
		vet[i]=n;
		i++;
		x++;
	}
	
 	for(a=0; a < i; a++){
		printf("%d ",vet[a]);    
	}
    


	return 0;
}
