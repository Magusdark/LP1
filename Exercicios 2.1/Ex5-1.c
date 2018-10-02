#include <stdio.h>

int main (void){
    int n=0 , soma=0 , i=0 ;
    printf("Digite 'n': \n");
    scanf("%d" , &n);
    while (n>0){
        i=(i+1);
        soma=(soma + (i*i));
        n=(n-1);
    }
    printf("O somatório eh:%d\n", soma);
    return 0;
}
