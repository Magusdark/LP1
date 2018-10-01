#include <stdio.h>
		
void compra(int* conta, int valor){
	*conta-=valor;
	printf("Compra Efetuada na conta de maior saldo. \n");
}

int main (void){
	int minha_conta1 , minha_conta2 , valor=500 , outra_conta; int* conta;
	printf("Insira o saldo da sua conta: \n");
	scanf("%d %d" , &minha_conta1 , &minha_conta2);
	if (minha_conta1<minha_conta2){
		conta=&minha_conta2;
		outra_conta=minha_conta1;
	}else{
		conta=&minha_conta1;
		outra_conta=minha_conta2;
	}
	compra(conta,valor);
	printf("Os saldos das duas contas são:%d \n%d \n", *conta , outra_conta);
	return 0;
}
