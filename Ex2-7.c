#include <stdio.h>

float main (void){
    float preco;
    float valor;
    printf("Insira o custo do celular em dolares: \n");
    scanf("%f" , &preco);
    valor = preco * 3.17;
    if (valor <1000){
        printf("Bom negocio\n");
    }else{
        printf("Mau negocio\n");
    }
    return 0;
    }
