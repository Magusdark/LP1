#include<stdio.h>
#include<stdlib.h>

struct Orb {
    char elem[30];
    char estilo[30];
    int nivel;
};

void preenche(struct Orb* orb){
    printf("Escolha o elmento da orb, seu estilo e seu nivel, respectivamente:\n");
    scanf("%s", (*orb).elem);
    scanf("%s", (*orb).estilo);
    scanf("%d", (&(*orb).nivel));  
}

int main(void){
    struct Orb o1;
    preenche(&o1);
    printf("\nSua Orb:\nElemento:%s\nEstilo:%s\nNivel:%d\n", o1.elem, o1.estilo, o1.nivel);
    return 0;
}
