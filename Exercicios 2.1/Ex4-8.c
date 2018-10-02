#include <stdio.h>

int main(void){
    int soma;
    int n1;
    soma=0;
    while (n1!=0){
        printf("Insira um numero: \n");
        scanf("%d", &n1);
        soma = (soma+n1);
        if (n1==0){
            break;
        }
    }
    printf("A soma dos numeros eh:%d\n" , soma);
    return 0;
}
