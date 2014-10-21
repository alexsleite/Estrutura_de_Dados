//Questão 05 da Lista 3.
//Alexsandro Leite Figueiredo.

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define tamNome 30
 
int main () 
{ 
  int *mat,*ano,i=0,j=0,n=0; 
  char** nome; 
  char tam[tamNome]; 
  scanf("%d",&n); 
  mat=malloc(n*sizeof(int));
  nome=malloc(n*sizeof(char *)); 
  ano=malloc(n*sizeof(int));
 
  for (i=0;i<n;i++) 
  {
    nome[i]=malloc(tamNome*sizeof(char)); 
    scanf("%d %s %d",&mat[i],nome[i],&ano[i]); 
  } 
  for (i=0;i<n;i++) 
  { 
    printf("%d %s %d\n",mat[i],nome[i],ano[i]); 
  } 
  free(mat);
  for (i=0;i<n;i++) 
  { 
    free(nome[i]); 
  } 
  free(nome); 
  free(ano); 
  return 0; 
}

