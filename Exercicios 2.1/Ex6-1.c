#include <stdio.h>

int main (void){
    int somaM=0 , somam =1000 ,M=0 , m=0 , soma=0 , n=0 , t=0 , v=0 , d=0 , e=0;
    printf("Quantos times estão participando?: \n");
    scanf("%d" , &n);
    while(n>0){
        printf("Qual o numero do time? \n");
        scanf("%d",&t);
        printf("Quantas vitórias o time teve? \n");
        scanf("%d" , &v);
        printf("Quantas empates o time teve? \n");
        scanf("%d" , &e);
        printf("Quantas derrotas o time teve? \n");
        scanf("%d" , &d);
        soma= ((v*3)+ e + (d*0));
        if (soma>somaM){
            M=t;
            somaM=soma;
        }else{
            if(soma<somam){
                m=t;
                somam=soma;
            }
         }
        n=(n-1);
    }
    printf("\nO Time com maior pontos eh %d e o com menor pontos eh %d\n" , M , m);
    return 0;
    }
