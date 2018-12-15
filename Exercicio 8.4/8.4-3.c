#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void escreva_string(FILE* f, char* str){
    int x,j;
    x=strlen(str);
    for (j=0;j<x;j++){
        fputc(str[j],f);
    }
}

int main(void){
    char nomes[10][25];
    FILE* f=fopen("C:/Users/Cliente/Documents/C/Arquivos/arq3.txt", "w");
    int i;
    for (i=0;i<10;i++){
        scanf("%s",nomes[i]);
        escreva_string(f,nomes[i]);
        fputc(' ',f);
    }
    fclose(f);
    return 0;
}
