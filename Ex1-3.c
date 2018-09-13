#include <stdio.h>

int main (void){
    int n1;
    int n2;
    int maior;
    printf("Insira um numero: \n");
    scanf("%d" , &n1);
    printf("Insira outro numero: \n");
    scanf("%d", &n2);
    if (n1>n2){
        maior=n1;
    }else{
        maior=n2;
    }
    printf("O maior numero eh:%d\n" , maior);
    return 0;
    }
