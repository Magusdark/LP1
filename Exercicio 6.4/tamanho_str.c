#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen2(char* str){
	int len;
	len = strlen(str);
	return len;
}

int main(void){
	char nam[30];
	scanf("%s", nam);
	int x = strlen2(nam);
	printf("O tamanho da str %s é %d\n", nam, x);
	return 0;
}

