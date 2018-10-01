#include <stdio.h>

int main (void){
	int a,b; int* p;
	printf("Insira dois valores: ");
	scanf("%d %d" , &a , &b);
	if (a>b){
		p=&a;
	}else{
		p=&b;
	}
	*p-=50;
	printf("O maior numero subtraido por 50 é: %d\n", *p);
	return 0;
}
