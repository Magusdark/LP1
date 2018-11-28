#include <stdio.h>

void troca(int* p1, int* p2){
        int z;
        z=*p2;
        *p2=*p1;
        *p1=z;
}
int main(){
    int x , y ;
    printf("Escolha um valor para x e para y , respectivamente: \n");
    scanf("%d %d", &x , &y);
    troca(&x,&y);
    printf("Os valores foram trocados:\nX=%d\nY=%d", x , y);
    return 0;
    }
