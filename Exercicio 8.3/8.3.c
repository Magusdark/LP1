#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
        char nomes[10][25];
        FILE* f=fopen("C:/Users/Cliente/Documents/C/Arquivos/arq2.txt", "w");
        int i,x,j;
        for (i=0;i<10;i++){
            scanf("%s",nomes[i]);
            x=strlen(nomes[i]);
            for (j=0;j<x;j++){
                    fputc(nomes[i][j],f);
            }
            fputc(' ',f);
        }
        fclose(f);
        return 0;
}
