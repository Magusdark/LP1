#include <stdio.h>

void preenche(int* vec, int n){
	int i;
	for (i=0;i<n;i++){
		printf("insira o numero na posição de numero %d do vetor: \n", i);
		scanf("%d", (vec+i));
	}
	printf("Vetor preenchido com sucesso\n");
}

float media(int* vec, int n){
	int i,soma=0;
	for (i=0;i<n;i++){
		soma+=*(vec+i);
	}
	float med=(soma/n);
	return med;
}
int main(){
	int n[5],i;
	preenche(n,5);
	float x=media(n,5);
	printf("A média entre os elementos do vetor é: %f\n", x);
	return 0;
}
