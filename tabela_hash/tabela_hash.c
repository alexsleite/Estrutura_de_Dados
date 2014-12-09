// Tabela hash. 
//Alexsandro Leite.
// Trabalho feito com muita dificuldade, e feito utilizando algumas funções encontradas em material da internet. 
// compilar utilizando dev.


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct lista_no {
   int    chave;
   struct lista_no *prox;
};
typedef struct lista_no LISTA;
LISTA *criar(void);  //prototipo
LISTA *insere(LISTA *a, int v, char op); //prototipo
int hash(int v,int n); //prototipo
void imprimir(LISTA *a); //prototipo



main(void) //funçao main
{
  int v, n, x, cont, i =0;
  char op;
  LISTA *p;  
  
       printf("\n informe numero de linhas da tabela = ");   //criação da tabela
       scanf("%d",&n);  
       LISTA *tab[n];                                  
       for (i = 0; i < n; i++)
            tab[i] = criar();  

                      
  printf("\nDeseja inserir as chaves no inicio ou no final da lista ?(i/f): "); //recebe valor da chave
  scanf("%s",&op);
                
  for(cont=0;cont<n;cont++)              
      { printf("\nEntre com o valor da chave = ");
        scanf("%d",&v);      
        tab[hash(v,n)] = insere(tab[hash(v,n)],v,op);        
      }

                            
  for(x=0;x<n;x++){   //descarrega a tabela
      printf("\n Tab[%d]:%p\n",x,tab[x]);                    
      imprimir(tab[x]); }    
        
getch();
return (0);
}

//tabelas.
                         
LISTA* insere(LISTA * a, int v, char op)  
{
  LISTA *ant = NULL;   /*  aponta para lista anterior  */
  LISTA *p = a;
              
  while (p != NULL)   /*   faz uma busca na tabela     */
   {
       if (p->chave == v)
          {
            printf("\n registro %d já existe",v);
            break;
          }
       ant = p;
       p = p->prox;      
   }
  
  if (p == NULL)   //se a chave não encontrada  ---> cria  o NÓ 
     {              
        
        p = (LISTA *)malloc(sizeof(LISTA));            
        p->chave = v;
        p->prox = NULL;
                    
        if (ant == NULL)      // inserção quando a lista esta vazia
            {a = p;
            return a;}  
        else                 // quando a lista tem registros, verifica opção de inserção 
            if(op == 'i')    // se a op = i, insere no início, senão, insere no final  
              {a = p;        
               a->prox = ant;            
               return a; }
            else
              {ant->prox = p;
               return ant;}                  
     }    
}    

int hash(int v, int n) //função hash
{
  return (v%n);
}

void imprimir(LISTA *a) //função imprime(recursivamente)
{      LISTA *p = a;
       if (p != NULL){  
           printf("\t chave = %d",p->chave);              
           imprimir(p=p->prox); }    
}

LISTA *criar() //função criar.
  { return NULL;
  }
