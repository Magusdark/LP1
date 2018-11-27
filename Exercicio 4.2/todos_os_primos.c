#include <stdio.h>

int eh_primo (int n) {
	int cont=0 , C=0;
	for (C=2;C<=n;C++) {
		if (n%C==0) {
			cont=(cont+1);
		}
	}
	int f;
	if (cont>=2){
		f=0;
	}else{
		f=1;
	}
	return f;
}

void max_primos(int n){
        int i,x,primos[n],cont=0;
        for (i=2;i<n;i++){
            x=eh_primo(i);
            if (x==1){
                primos[cont]=i;
                cont+=1;
            }
        }
        printf("Os numeros primos entre 1 e %d sao\n", n);
        for (i=0;i<cont;i++){
            printf("%d ",primos[i]);
        }
}
int main (void){
    int N;
    printf("Escolha um numero: \n");
    scanf("%d", &N);
    max_primos(N);
    return 0;
}
