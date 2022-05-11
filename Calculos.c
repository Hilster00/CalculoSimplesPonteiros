#include <stdio.h>

//funcoes basicas
void soma(int *n,int valor){
    *n=*n+valor;
}
void subtracao(int *n, int valor){
    *n=*n-valor;
}
void multiplicacao(int *n,int valor){
    *n=(*n)*valor;
}

float divisao(int *n,int valor){
    return ((*n)/valor);
}
void main(){
    
    int n,m;
    int *ponteiro_n,*ponteiro_m;
    
    ponteiro_n=&n;
    ponteiro_m=&m;
    
    *ponteiro_n=1;
    *ponteiro_m=2;
    
    int valor=2;
   
    //todas as operacoes
    //soma
    printf("\n%i+%i=",n,valor);
    soma(ponteiro_n,valor);
    printf("%i",n);
    
    printf("\n%i+%i=",m,valor);
    soma(ponteiro_m,valor);
    printf("%i",m);
    
    printf("\n");
    
    //subtracao
    printf("\n%i-%i=",n,valor);
    subtracao(ponteiro_n,valor);
    printf("%i",n);
    
    printf("\n%i-%i=",m,valor);
    subtracao(ponteiro_m,valor);
    printf("%i",m);
    
    printf("\n");
    
    //multiplicacao
    printf("\n%i*%i=",n,valor);
    multiplicacao(ponteiro_n,valor);
    printf("%i",n);
    
    printf("\n%i*%i=",m,valor);
    multiplicacao(ponteiro_m,valor);
    printf("%i",m);
    
    printf("\n");
    
    //divisao
    printf("\n%i/%i=",n,valor);
    printf("%.2f",divisao(ponteiro_n,valor));
    
    printf("\n%i/%i=",m,valor);
    printf("%.2f",divisao(ponteiro_m,valor));
    
}
