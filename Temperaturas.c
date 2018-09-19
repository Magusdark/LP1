#include <stdio.h>

int main (void){
    char n=0, soma=0 , cont=0 , q=0 , c=0 , media=0;
    printf("Insira a quantidade de temperaturas: \n");
    scanf("%d" , &n);
    int temps[n];
    for(c=0; c<n; c++){
            printf("Insira uma temperatura entre -100 e 100: \n");
            scanf("%d",&temps[c]);
            soma = (soma + temps[c]);
    }
    media=(soma/n);
    for(cont=0; cont<n; cont++){
        if (temps[cont]>media){
            q=(q+1);
        }
    }
    printf("A Media das temperaturas eh:%d\n A quantidade de temperaturas acima da media eh:%d\n", media ,q);
    return 0;
    }
