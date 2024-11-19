#include "cenarios.h"

int main(){
 
    ini();
    printf("%c\t\t  Digite seu nome: ", 186);
    scanf(" %s", nome);
    printf("%c", 186);
    fini();

    while(reiniciar){
    if (setjmp(inicio) == 0){

    mato();

    floresta();

    cidade();

    } 
    else {
        textoreinicio();
}
}
}