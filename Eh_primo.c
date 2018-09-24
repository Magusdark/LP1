#include<stdio.h>

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

int main (void){
	int N;
	printf("Escolha um numero N: \n");
	scanf("%d" , &N);
	int F=eh_primo(N);
	printf("\n%d\n" , F);
	return 0;
}
