#include <stdio.h>
#include <stdlib.h>

int strlen2(char* str){
	int len=0;
	char x=str[len];
	while( x!='\0'){
        x=str[len];
        len+=1;
	}
    return (len-1);
}


int main(void){
	char nam[30];
	scanf("%s", nam);
	int x = strlen2(nam);
	printf("O tamanho da str %s eh: %d\n", nam, x);
    return 0;
}

