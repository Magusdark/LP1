#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
        double identificador;
    }id;
    struct Orb o;
};
void preenche(struct Orb* orb){
    printf("Escolha o elemento da orb, o estilo e o seu nivel, respectivamente:\n");
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
        scanf("%lf", &(*p1).id.identificador);
    }
    preenche((&(*p1).o));
}
int main(void){
    struct Portador p1;
    preenche2(&p1);
    FILE* f= fopen("/home/ime/personagem.txt", "wb");
    if (p1.t==1){
        fwrite(&p1.classe,  sizeof(char), (strlen(p1.classe)+1), f);
        fwrite(&p1.nome, sizeof(char), (strlen(p1.nome)+1), f);
        fwrite(&p1.t, sizeof(int), 1, f);
        fwrite(&p1.id.jogador, sizeof(char), (strlen(p1.id.jogador)+1), f);
        fwrite(&p1.o.elem, sizeof(char), (strlen(p1.o.elem)+1), f);
        fwrite(&p1.o.estilo, sizeof(char), (strlen(p1.o.estilo)+1), f);
        fwrite(&p1.o.nivel, sizeof(int), 1, f);
        
    }else if(p1.t==2){
        fwrite(&p1.classe,  sizeof(char), (strlen(p1.classe)+1), f);
        fwrite(&p1.nome, sizeof(char), (strlen(p1.nome)+1), f);
        fwrite(&p1.t, sizeof(int), 1, f);
        fwrite(&p1.id.identificador, sizeof(double), 1, f);
        fwrite(&p1.o.elem, sizeof(char), (strlen(p1.o.elem)+1), f);
        fwrite(&p1.o.estilo, sizeof(char), (strlen(p1.o.estilo)+1), f);
        fwrite(&p1.o.nivel, sizeof(int), 1, f);
    }
    fclose(f);
    FILE* g=fopen("/home/ime/personagem.txt", "rb");
    struct Portador p2;
    if (p1.t==1){
    	fread(&p2.classe,  sizeof(char), (strlen(p1.classe)+1), g);
        fread(&p2.nome, sizeof(char), (strlen(p1.nome)+1), g);
        fread(&p2.t, sizeof(int), 1, g);
        fread(&p2.id.jogador, sizeof(char), (strlen(p1.id.jogador)+1), g);
        fread(&p2.o.elem, sizeof(char), (strlen(p1.o.elem)+1), g);
        fread(&p2.o.estilo, sizeof(char), (strlen(p1.o.estilo)+1), g);
        fread(&p2.o.nivel, sizeof(int), 1, g);
        printf("\nSeu nome:%s\nSeu personagem:\nClasse:%s\nNome:%s\n\nSua Orb:\nElemento:%s\nEstilo:%s\nNível:%d\n",p2.id.jogador, p2.classe, p2.nome, p2.o.elem, p2.o.estilo, p2.o.nivel);        
    }else if(p1.t==2){
        fread(&p2.classe,  sizeof(char), (strlen(p1.classe)+1), g);
        fread(&p2.nome, sizeof(char), (strlen(p1.nome)+1), g);
        fread(&p2.t, sizeof(int), 1, g);
        fread(&p2.id.identificador, sizeof(double), 1, g);
        fread(&p2.o.elem, sizeof(char), (strlen(p1.o.elem)+1), g);
        fread(&p2.o.estilo, sizeof(char), (strlen(p1.o.estilo)+1), g);
        fread(&p2.o.nivel, sizeof(int), 1, g);
        printf("\nSeu numero de sócio:%.0lf\nSeu personagem:\nClasse:%s\nNome:%s\n\nSua Orb:\nElemento:%s\nEstilo:%s\nNível:%d\n",p2.id.identificador, p2.classe, p2.nome, p2.o.elem, p2.o.estilo, p2.o.nivel);
    }
    return 0;
}
