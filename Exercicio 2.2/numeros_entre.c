#include <stdio.h>

int main (){
        int n1,n2,i,maior,menor;
        printf("Escolha dois numeros n1 e n2:\n");
        scanf("%d %d", &n1, &n2);
        if (n1>n2){
               maior=n1;
               menor=n2;
        }else{
           maior=n2;
           menor=n1;
        }
        printf("numeros entre %d e %d\n",menor,maior);
            for (i=(menor+1);i<maior;i++){
                printf("%d ", i);
            }
        return 0;
}
