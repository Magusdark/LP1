#include<stdio.h>
#include<stdlib.h>

struct Orb {
    char elem[30];
    char estilo[30];
    int nivel;
};

struct Portador{
    char classe[30];
    char nome[30];
    int  t;
    union {
	char jogador[256];
	float identificador;
    }id;
    struct Orb o;
};
void preenche(struct Orb* orb){
    printf("Escolha o elmento da orb, o estilo e o seu nivel, respectivamente:\n");
    scanf("%s", (*orb).elem);
    scanf("%s", (*orb).estilo);
    scanf("%d", (&(*orb).nivel));  
}

void preenche2(struct Portador* p1){
    printf("Escolha a classe e o nome do seu personagem\n");
    scanf("%s", (*p1).classe);
    scanf("%s", (*p1).nome);
    printf("Digite 1 para usar seu nome como identificador ou 2 para usar seu numero de sócio:\n");
    scanf("%d", &(*p1).t);
    if ((*p1).t==1){
	printf("Digite seu nome:\n");
	scanf("%s", (*p1).id.jogador);
    }else if ((*p1).t==2){
	printf("Digite seu número de sócio;\n");
	scanf("%f", &(*p1).id.identificador);
    }
    preenche((&(*p1).o));
}
int main(void){
    struct Portador p1;
    preenche2(&p1);
    if (p1.t==1){
    	printf("\nSeu nome:%s\nSeu personagem:\nClasse:%s\nNome:%s\n\nSua Orb:\nElemento:%s\nEstilo:%s\nNível:%d\n",p1.id.jogador, p1.classe, p1.nome, p1.o.elem, p1.o.estilo, p1.o.nivel);
    }else if(p1.t==2){
	printf("\nSeu numero de sócio:%f\nSeu personagem:\nClasse:%s\nNome:%s\n\nSua Orb:\nElemento:%s\nEstilo:%s\nNível:%d\n",p1.id.identificador, p1.classe, p1.nome, p1.o.elem, p1.o.estilo, p1.o.nivel);
    }	
    return 0;
}
