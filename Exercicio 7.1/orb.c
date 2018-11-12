#include<stdio.h>
#include<stdlib.h>

struct Orb {
    char elem[30];
    char don[30];
    int age;
};

void preenche(struct Orb* orb){
    printf("Escolha o elmento da orb, o nome do dono e o seu tempo de uso, respectivamente:\n");
    scanf("%s", (*orb).elem);
    scanf("%s", (*orb).don);
    scanf("%d", (&(*orb).age));  
}

int main(void){
    struct Orb o1;
    preenche(&o1);
    printf("%s\n%s\n%d\n", o1.elem, o1.don, o1.age);
    return 0;
}
