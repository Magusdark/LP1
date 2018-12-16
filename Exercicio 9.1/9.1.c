#include <stdio.h>
#include<stdlib.h>

int main(void){
	int vet[5],i,j;
	for(i=0;i<5;i++){
		printf("Digite o elemento[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ",vet[i]);
	}
	printf("\n");
	printf("Digite a posição do elemento a ser removido: ");
	scanf("%d",&j);
	for(i=j;i<4;i++){
		vet[i]=vet[i+1];
	}
	for(i=0;i<4;i++){
		printf("%d ",vet[i]);
	}
	printf("\n");
	return 0;
}
