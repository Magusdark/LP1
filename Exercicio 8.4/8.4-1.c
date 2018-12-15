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
    char nome[25];
    FILE* f=fopen("C:/Users/Cliente/Documents/C/Arquivos/arq4.txt", "w");
    scanf("%s",nome);
    escreva_string(f,nome);
    fclose(f);
    return 0;
}
