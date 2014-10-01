#include<stdio.h>
void troca(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int a,b;
scanf("%d %d", &a,&b);
troca(&a,&b);
printf("%d %d\n\a",a,b);
return 0;
}

    Status
    API
    Training
    Shop
    Blog
    About

