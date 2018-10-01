#include <stdio.h>

void troca(int* p1, int* p2){
        int* p3; int z;
        p3=&z;
        *p3=*p2;
        *p2=*p1;
        *p1=*p3;
}
int main(){
    int x , y ; int* p1;
    int* p2;
    printf("Escolha um valor para x e para y , respectivamente: \n");
    scanf("%d %d", &x , &y);
    p1=&x;
    p2=&y;
    troca(p1,p2);
    printf("Os valores foram trocados:\nX=%d\nY=%d", x , y);
    return 0;
    }
