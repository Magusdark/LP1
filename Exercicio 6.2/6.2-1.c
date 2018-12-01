#include<stdio.h>
#include<stdlib.h>

void preenche(int arr[4][2], int l, int c){
    int i,p;
    for (i=0;i<l;i++){
        for (p=0;p<c;p++){
            printf("\nInsira o elemento da linha %d e coluna %d ", (i+1),(p+1));
            scanf("%d", &arr[i][p]);
        }
    }
}

float media(int arr[4][2], int l, int c){
    int soma=0;float med=0;
    int i,p;
    for (i=0;i<l;i++){
        for (p=0;p<c;p++){
            soma+=arr[i][p];
        }
    }
    float x=l*c;
    med=soma/x;
    return med;
    }
int main(void){
    int arr[4][2];
    preenche(arr,4,2);
    float x=media(arr,4,2);
    printf("\nA media dos valores eh: %.2f\n", x);
    return 0;
}
