//Questão 07 da Lista 3.
//Alexsandro Leite Figueiredo.

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *vet,n,a,c1,c2,dis;
        scanf("%d",&n);
	vet=malloc(n*sizeof(int)); //aloca a memoria para o matriz.
    
	for(a=0; a < n; a++){     // Le as distancias das cidades.
		scanf("%d",&vet[a]);    
	}
 	
	for(a=0; a < n; a++){    // imprime a matriz
		printf("%d ",vet[a]);    
	}
    	printf("\n");

	scanf("%d %d", &c1, &c2);  // le a identificaçao das duas cidades.
	
	dis=0;
	for(a=c1-1; a<c2-1; a++){
		dis=vet[a+1]+dis;
	}
	
	printf("%d\n",dis);

	return 0;
}
