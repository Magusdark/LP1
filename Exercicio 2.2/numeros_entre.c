#include <stdio.h>

int main (){
        int n1,n2,i;
        printf("Escolha dois numeros n1 e n2:\n");
        scanf("%d %d", &n1, &n2);
        if (n1>n2){
            printf("numeros entre %d e %d\n", n2,n1);
            for (i=(n2+1);i<n1;i++){
                printf("%d ", i);
            }
        }else{
            printf("numeros entre %d e %d\n", n1,n2);
            for(i=(n1+1);i<n2;i++){
                printf("%d ", i);
            }
        }
        return 0;
}
