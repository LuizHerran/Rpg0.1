#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int opc, opc2, opc3, hp=20, hpm=25, qmanga=0, xp=0, nvl=1, forc=5, qslot1=0, qslot2=0, qslot3=0, qslot4=0;
char nome[10], inv, slot1[]="Vazio", slot2[]="Vazio", slot3[]="Vazio", slot4[]="Vazio";

void ini() {
    printf("//===============================================================\\\\\n||\n");
}

int sorte(){
    srand(time(NULL));
    return rand()%10;
}

int vida(){
    if(hp <= 0){
        printf("//===========================================\\\\\n");
        printf("||\t\tVOCE MORREU..\n");
        printf("\\\\===========================================//\n");
        system("pause");
        system("cls");
        return 0;
    }
    return hp;
}

void habilidades(){
    do{
        ini();
        printf("||\t\t\tHABILIDADES\n");
        printf("||\t\t FORCA %d\t VIDA MAXIMA %d", forc, hpm);
        printf("||\t\t1 - +Forca \t 2 - +Vida");
        printf("\n||");
        printf("\n\\\\===============================================================//\n");
        scanf("%d", &opc);
        system("cls");
    } while(opc < 1 || opc > 2);
    
    if(opc == 1){
        forc += 1;
        ini();
        printf("||\t\t+ 1 de forca adicionado!\n");
        printf("\n||\n\\\\===============================================================//\n");
        system("pause");
        system("cls");
    } else if(opc == 2){
        hpm += 5;
        hp = hpm;
        ini();
        printf("||\t\t+ 5 de vida adicionado!\n");
        printf("\n||\n\\\\===============================================================//\n");
        system("pause");
        system("cls");
    }
}

int nivel(){
    if(xp > 99) {
        xp = xp % 100;
        nvl += 1;
        habilidades();
    }
    return nvl;
}

void fini(){ 
    printf("\n||\n||  %d Hp\t %d Nivel\n\\\\===============================================================//\n", vida(), nivel()), system("pause"), system("cls");
}

void inventario(int qslot1, const char *slot1, int qslot2, const char *slot2, int qslot3, const char *slot3, int qslot4, const char *slot4){
    ini();
    printf("||\t\t\tINVENTARIO\n");
    printf("||\t\t%d - %s\t%d - %s", qslot1, slot1, qslot2, slot2);
    printf("\n||");
    printf("\t\t%d - %s\t%d - %s", qslot3, slot3, qslot4, slot4);
    printf("\n||  %d Hp", vida());
    printf("\n\\\\===============================================================//\n\n");
    system("pause");
    system("cls");
}
