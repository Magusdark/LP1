#include <stdio.h>

int main(void){
    int vel;
    float km;
    printf("Insira a velocidade , em mph: \n");
    scanf("%d", &vel);
    km = vel *1.6;
    if (km<80){
        printf("Acelere!");
    }else{
        if(km<100){
                printf("Mantenha!");
    }if (km>100){
        printf("Desacelere!");
    }
    return 0;
    }}
