#include<stdio.h>
#include<stdlib.h>


int main(void){
        char nome[25];
        FILE* f=fopen("C:/Users/Cliente/Documents/C/Arquivos/arq.txt", "r");
        int i=0;
        nome[i]=fgetc(f);
        while(nome[i]!=-1){
            i+=1;
            nome[i]=fgetc(f);
        }
        nome[i]='\0';
        fclose(f);
        printf("%s",nome);
        return 0;
}
