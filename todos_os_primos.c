#include <stdio.h>

void max_primos(int n){
        int i, primos[n], q=0 , c, cont=0 ;
        for (i=2;i<n;i++){
            for (c=2;c<=i;c++){
                if (i%c==0){
                    cont+=1;
                }
            }
            if (cont<2){
                primos[q]=i;
                q+=1;
            }
            cont=0;
        }
        printf("Os numeros primos entre 1 e %d sao: \n", n);
        for (i=0;i<q;i++){
            printf("%d ", primos[i]);
            }
        }
int main (void){
    int N;
    printf("Escolha um numero: \n");
    scanf("%d", &N);
    max_primos(N);
    return 0;
    }
