#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen2(char* str){
	int len;
	len = strlen(str);
	return len;
}

void strjoin(char* d, char* o1, char* o2){
	int i,o=0;
	int len1,len2;
	len1= strlen2(o1);
	len2= strlen2(o2);
	for (i=0;i<len1;i++){
		d[i]=o1[i];
		o+=1;
	}
	for (i=0;i<len2;i++){
		d[o]=o2[i];
		o+=1;
	d[o]='\0';
	}
}
int main(void){
	char nam[40],st1[20],st2[20];
	printf("Digite a primeira string: ");
	scanf("%s",st1);
	printf("Digite a segunda string: ");
	scanf("%s",st2);
	strjoin(nam,st1,st2);
	printf("A string uniao de %s e %s é: %s\n", st1,st2,nam);
	return 0;
}
