#include <stdio.h>
#include <stdlib.h>


void main (void){

	int **m;       //ponteiro para a matriz 
	int   i,j,a,b;    //variavel auxiliar      
	


	scanf("entre com as dimensões da matriz %d %d", &i, &j);

	m = (int **) calloc (i, sizeof(int *));   // aloca as linhas da matriz 
  		 
  	for ( a = 0; a < i; a++ ) {              //aloca as colunas da matriz
    	m[a] = (int*) calloc (j, sizeof(int));
    }
  
	printf("Digite os valores da matriz\n");
	for(a = 0; a<i; a++)
		for(b=0; b<j; b++)
			scanf("%d", &m[a][b]);
	

	for(a = 0; a<i; a++){
		for(b=0; b<j; b++){
			printf("%d, ", m[a][b]);
		}
		printf("\n");
	}
	
	
	for(a=0; a<i; a++){
		free(m[a]);
	}
	free(m);
	return 0
}
