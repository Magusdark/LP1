#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
        char nome[25];
        scanf("%s", nome);
        FILE* f=fopen("/home/ime/arq.txt", "w");
        int i,x;
        x=strlen(nome);
        for (i=0;i<x;i++){
                fputc(nome[i],f);
        }
        fclose(f);
        return 0;
}
