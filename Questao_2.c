#include<stdio.h>
void maior(int *a, int *b){
        int temp;
        temp=*a;
        if(*a<*b){
        	*a=*b;
            *b=temp;
		}
        
}
int main(){
        int a,b;
        scanf("%d %d", &a,&b);
        
        maior(&a,&b);
        printf("%d %d\n\a",a,b);
        return 0;
}
