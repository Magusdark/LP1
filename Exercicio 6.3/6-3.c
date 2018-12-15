#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
    int x;
    int y
};

void preenche(struct ponto* p ){
    printf("Escolha a coordenada para X e Y:\n");
    scanf("%d %d", &(*p).x, &(*p).y);
}
void preenchevetor(struct ponto* p2){
    int i;
    for (i=0;i<10;i++){
            preenche(p2+i);
    }
}
int distante(struct ponto* p3){
    int i,distancia2;
    double distancia,a,temp1,temp2;
    distancia=0;
    for (i=0;i<10;i++){
        temp1=pow(p3[i].x,2);
        temp2=pow(p3[i].y,2);
        a=sqrt(temp1+temp2);
        if (a>=distancia){
            distancia=a;
            distancia2=i;
        }
    }
    return distancia2;
}
int main(void){
    struct ponto v[10];
    preenchevetor(v);
    int z=distante(v);
    printf("O ponto mais distante de 0,0 eh:\nX:%d\nY:%d",v[z].x,v[z].y);
    return 0;
}
