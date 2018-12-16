#include<stdio.h>
#include<stdlib.h>

struct Caixa{
    int val;
    struct Caixa* prox;
};

int main (void){
    struct Caixa c1;
    struct Caixa c2;
    struct Caixa c3;
    struct Caixa c4;
    struct Caixa c5;
    scanf("%d", &c1.val);
    c1.prox=&c2;
    scanf("%d", &c2.val);
    c2.prox=&c3;
    scanf("%d", &c3.val);
    c3.prox=&c4;
    scanf("%d", &c4.val);
    c4.prox=&c5;
    scanf("%d", &c5.val);
    c5.prox=NULL;
    printf("%d->%d->%d->%d->%d\n", c1.val, c1.prox->val,c1.prox->prox->val,c1.prox->prox->prox->val,c1.prox->prox->prox->prox->val);
    return 0;
}
