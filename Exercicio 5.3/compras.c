#include <stdio.h>

void compra(int* conta, int valor,int outra_conta){
	*conta-=valor;
	printf("Compra Efetuada na conta de maior saldo.\n Saldo atual:%d\nOutra conta: %d\n", *conta, outra_conta);
}

int main (void){
	int minha_conta1 , minha_conta2 , compras[]={100, 50, 80, 30, 20}, valor , outra_conta, i; int* conta;
	printf("Insira o saldo da sua conta: \n");
	scanf("%d %d" , &minha_conta1 , &minha_conta2);
	if (minha_conta1<minha_conta2){
		conta=&minha_conta2;
		outra_conta=minha_conta1;
	}else{
		conta=&minha_conta1;
		outra_conta=minha_conta2;
	}
	for (i=0;i<5;i++){
        valor=compras[i];
        compra(conta, valor, outra_conta);
	}
	printf("Os saldos das duas contas são:%d \n%d \n", *conta , outra_conta);
	return 0;
}
