#include "status.h"

void mato(){

    ini();
    printf("%c\t\t\t\t%s\n", 186, nome);
    printf("%c\n", 186);
    printf("%c\tApos se deitar para dormir em uma quarta-feira comum\n%c\tVoce acorda de um sonho extremamente realista...\n"
    "%c\n%c\t\t\t   Mas espera...",186,186,186,186);
    fini();

    ini();
    printf("%c\n%c", 186, 186);
    printf("\t\t\tVoce nao esta em casa...\n");
    printf("%c\tVoce se ve deitado em uma floresta, sentindo a grama\n%c\t\t\tna sua pele.\n", 186, 186);
    printf("%c", 186);
    fini();

    ini();
    printf("%c\t\tPor algum motivo vc sente que tem 20 de vida.\n", 186);
    printf("%c\tIsso e esquisito agora vc sabe o quao ferido vc pode ficar\n%c\t\t\tantes de...", 186, 186);
    fini();

    do{
    ini();
    printf("%c\t\t\tAperte:\t\t\t\t", 186);
    printf("\n%c", 186);
    printf("\n%c\t\t1 - Levantar e olhar ao redor.", 186);
    printf("\n%c\t\t2 - Continar deitado.", 186);
    printf("\n%c", 186);
    printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
    barr();
    scanf("%d", &opc);
    system("cls");
    }while(opc < 1 || opc > 2);
    

    switch(opc){
        //      Olhar o mato - continua a historia.
        case 1 : 
        system("cls"); 
        break;
        //      Vc descança e depois continua a historia.
        case 2 :
        do{
        ini();
        printf("%c\t\tVoce nao consegue dormir ou tentar acordar\t\t\t\t", 186);
        printf("\n%c", 186);
        printf("\n%c\t1 - Levantar e olhar ao redor.", 186);
        printf("\n%c", 186);
        printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
        barr();
        scanf("%d", &opc);
        system("cls");
        }while(!(opc==1));
        }
    do{
    ini();
    printf("%c\t\tVoce esta em um campo aberto, perto de uma arvore.", 186);
    printf("\n%c\tA sua frente tem uma mata fechada e logo apos um morro\n%c\t\t\tcom um vilarejo.", 186, 186);
    printf("\n%c", 186);
    printf("\n%c\t\t1 - Ir ate a arvore.", 186);
    printf("\n%c\t\t2 - Tentar passar pela mata e chegar na cidade.", 186);
    printf("\n%c\t\t3 - Olhar mais ao redor.", 186);
    printf("\n%c", 186);
    printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
    barr();
    scanf("%d", &opc);
    system("cls");
    }while(opc<1 || opc>3);

    switch(opc){
        case 1 :
                // VC VAI NA ARVORE.
            do{
            ini();
            printf("%c\t\tVoce chega na arvore facilmente\n%c\tA sombra e o vento fresco batendo na sua pele te faz se\n%c\t\t\tsentir vivo!\n%c", 186, 186, 186);
            printf("\n%c\t\t1 - Se sentar aos pes da arvore", 186);
            printf("\n%c\t\t2 - Tentar passar pela mata e chegar na cidade.", 186);
            printf("\n%c\t\t3 - Olhar mais ao redor.", 186);
            printf("\n%c", 186);
            printf("\n%c  %d Hp\t%d Nivel", 186, hp+=1, nvl);
            barr();
            scanf("%d", &opc2);
            system("cls");
            }while(opc2<1 || opc2>3);
            nivel(xp+=5);

            switch(opc2){
                case 1 : 
                    //              VC PEGA A MANGA.
                    ini();
                    printf("%c\t\tVoce decide para um pouco para pensar\n%c\te tentar entender o que aconteceu, infelizmente\n%c\t\t\tnao a explicacao...\n", 186, 186, 186);
                    printf("%c\n", 186);
                    printf("%c\t\tUma manga cai do seu lado, ela parece apetitosa,\n%c\t\tvoce pega ela e resolve guarda-la.", 186, 186);
                    printf("\n%c", 186);
                    printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
                    barr();
                    system("pause");
                    system("cls");
                    inventario(1, "Manga", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                    qslot1=1;
                    nivel(xp+=10);

                    do{
                    ini();
                    printf("%c\t\tVoce esta realmente descansado.", 186);
                    printf("\n%c\tMas se sente extremamente desconfortavel com sua situacao", 186);
                    printf("\n%c", 186);
                    printf("\n%c\t\t1 - Tentar passar pela mata e chegar na cidade.", 186);
                    printf("\n%c\t\t2 - Olhar mais ao redor.", 186);
                    printf("\n%c", 186);
                    printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
                    barr();
                    scanf("%d", &opc3);
                    system("cls");
                    }while(opc3<1 || opc3>2);

                    switch(opc3){
                        //  Continuar a historia indo pra floresta.
                        case 1 : break;
                        //  Olha ao redor depois vai para a floresta.
                        case 2 : {
                    ini();
                    printf("%c\t\t\tVoce so ve mato..", 186);
                    fini();

                    ini();
                    printf("%c\t\tEntao decide ir em direcao a cidade\n%c\t\tvoce vai rumo a floresta.", 186, 186);
                    fini();
                    break;
                        }
                    }
                //  Segue para a floresta.
                case 2 :
                break;
                //  Vc olha ao redor e segue para a floresta.
                case 3 :
                    ini();
                    printf("%c\t\t\tVoce so ve mato..", 186);
                    fini();

                    ini();
                    printf("%c\t\tEntao decide ir em direcao a cidade\n%c\t\tvoce vai rumo a floresta.", 186, 186);
                    fini();
                    break;
    
            }
        //  Segue para a floresta.
        case 2 :
                break;
        
        case 3 : 
                // olhou ao redor.
                ini();
                printf("%c\t\t\tVoce so ve mato..", 186);
                fini();

                do{
                ini();
                printf("%c\t\t\tVoce so ve mato..", 186);
                printf("\n%c\t\t1 - Ir ate a arvore.", 186);
                printf("\n%c\t\t2 - Tentar passar pela mata e chegar na cidade.", 186);
                printf("\n%c", 186);
                printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
                barr();
                scanf("%d", &opc3);
                system("cls");
                }while(opc3<1 || opc3>2);

                switch(opc3){
                    //  Ir até a arvore.
                    case 1 : {
                        do{
                        ini();
                        printf("%c\t\tVoce chega na arvore facilmente\n%c\tA sombra e o vento fresco batendo na sua pele te faz se\n%c\t\t\tsentir vivo!\n%c", 186, 186, 186);
                        printf("\n%c\t\t1 - Se sentar aos pes da arvore", 186);
                        printf("\n%c\t\t2 - Tentar passar pela mata e chegar na cidade.", 186);
                        printf("\n%c", 186);
                        printf("\n%c  %d Hp\t%d Nivel", 186, hp+=1, nvl);
                        barr();
                        scanf("%d", &opc2);
                        system("cls");
                        }while(opc2<1 || opc2>3);
                        nivel(xp+5);

                        switch(opc2){
                            //  Se senta aos pes da arvore
                            case 1 : {
                                //              Vc pega a manga.
                                ini();
                                printf("%c\t\tVoce decide para um pouco para pensar\n%c\te tentar entender o que aconteceu, infelizmente\n%c\t\t\tnao a explicacao...\n", 186, 186, 186);
                                printf("%c\n", 186);
                                printf("%c\t\tUma manga cai do seu lado, ela parece apetitosa,\n%c\t\tvoce pega ela e resolve guarda-la.", 186, 186);
                                printf("\n%c", 186);
                                printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
                                barr();
                                system("pause");
                                system("cls");
                                inventario(1, "Manga", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                                nivel(xp+10);
                                
                                do{
                                    ini();
                                    printf("%c\t\tVoce esta realmente descansado.", 186);
                                    printf("\n%c\tMas se sente extremamente desconfortavel com sua situacao", 186);
                                    printf("\n%c", 186);
                                    printf("\n%c\t\t1 - Tentar passar pela mata e chegar na cidade.", 186);
                                    printf("\n%c\t\t2 - Olhar mais ao redor.", 186);
                                    printf("\n%c", 186);
                                    printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                                    barr();
                                    scanf("%d", &opc3);
                                    system("cls");
                                    }while(opc3<1 || opc3>2);

                                    switch(opc3){
                                        //  Segue para a floresta.
                                        case 1 : break;
                                        //  olha ao redore e segue para a floresta.
                                        case 2 : {
                                                ini();
                                                printf("%c\t\tVoce so ve mato..", 186);
                                                fini();

                                                ini();
                                                printf("%c\t\tEntao decide ir em direcao a cidade\n%c\t\tvoce vai rumo a floresta.", 186, 186);
                                                fini();
                                                break;
                                                }
                                                }
                                    }
                    //  Segue para a floresta.
                    case 2 :
                    break;
                    //  Vc olha ao redor e segue para a floresta.
                    case 3 :
                    ini();
                    printf("%c\t\t\tVoce so ve mato..", 186);
                    fini();

                    ini();
                    printf("%c\t\tEntao decide ir em direcao a cidade\n%c\t\tvoce vai rumo a floresta.", 186, 186);
                    fini();
                    break;
                            }
                            }
                            }
                }
}

void floresta(){
    ini();
    printf("%c\t\t\tVoce entra na mata denca..\n", 186);
    printf("%c\t\tVoce escuta um barulho no meio da mata..", 186);
    fini();

    do{
    ini();
    printf("%c\t\tVoce nao sabe oq e nem de onde vem\n%c\t\t mas escuta muitas folhas se mexendo..", 186, 186);
    printf("\n%c", 186);
    printf("\n%c\t1 - Correr na direcao da cidade.", 186);
    printf("\n%c\t2 - Correr na direcao do barulho", 186);
    printf("\n%c\t3 - Apenas correr em desespero!", 186);
    printf("\n%c", 186);
    printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
    barr();
    scanf("%d", &opc);
    system("cls");
    }while(opc<1 || opc>3);

    switch(opc){
        case 1 : 
        //Chance de encontrar a cobra
        if((sor-5)<5){
            ini();
            printf("%c  %d de sorte.\n", 186, sor);
            printf("%c\t\t\tNao e seu dia de sorte...", 186);
            fini();
            if(qslot1==1){
            do{
            ini();
            printf("%c\t\tUma uma cobra gigante salta de uma arvore\n%c\tna sua frente e ela esta preparada para dar o bote..", 186, 186);
            printf("\n%c", 186);
            printf("\n%c\t1 - Jogar a manga nela", 186);
            printf("\n%c\t2 - Tentar correr", 186);
            printf("\n%c\t3 - Tentar lutar com a cobra", 186);
            printf("\n%c", 186);
            printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
            barr();
            scanf("%d", &opc2);
            system("cls");
            }while(opc2<1 || opc2>3);
            
            switch(opc2){

                case 1 : 
                //Jogou a manga na croba.
                if((sor-4)>4){
                ini();
                printf("%c  %d de sorte.\n", 186, sor);
                printf("%c\t\tVoce aceta a manga na cabeca dela!", 186);
                printf("\n%c\tParabens voce acaba de deixar ela com muuuito\n%c\t\t\tmais raiva!", 186, 186);
                printf("\n%c", 186);
                printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                barr();
                system("pause");
                system("cls");
                nivel(xp+10);

                ini();
                printf("%c\t\t\tCara era uma manga!", 186);
                printf("\n%c\t\tVoce pensou mesmo em matar uma\n%c\t\t\tcobra com uma manga?", 186, 186);
                fini();

                ini();
                printf("%c\t\t\tTa... vou te dar essa chance..", 186);
                printf("\n%c\tAperta 'Enter' ai e bora ver se a sorte \n%c\t\t\testara do seu lado..", 186, 186);
                fini();

                ini();
                printf("%c\t\tEntao... como posso dizer isso..", 186);
                printf("\n%c\t\tSua sorte foi 3.. Nem te ajudando\n%c\t\tvc consegue fazer algo em..", 186, 186);
                fini();

                //      Vc leva uma pikada.
                ini();
                printf("%c\t\tEntao... como posso dizer isso..", 186);
                printf("\n%c\t\tC levou uma bela de uma picada :]", 186);
                printf("\n%c", 186);
                printf("\n%c\t\t\t-10 de vida..", 186);
                printf("\n%c  %d Hp\t %d Nivel", 186, hp-=10, nvl);
                barr();
                inventario(0, "Vazio", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                vida(hp);

                do{
                ini();
                printf("%c\t\t\tvoce esta com muita do...", 186);
                printf("\n%c", 186);
                printf("\n%c\t1 - Tentar tirar a cobra de sua perna.", 186);
                printf("\n%c\t2 - Procurar algo ao redor", 186);
                printf("\n%c", 186);
                printf("\n%c  %d Hp\t %d Nivel", hp, nvl);
                barr();
                scanf("%d", &opc3);
                system("cls");
                }while(opc3<1 || opc3>2);

                switch(opc3){
                    case 1 :
                        ini();
                        printf("%c\t\t\tA cobre e muito forte...", 186);
                        printf("\n%c", 186);
                        printf("\n%c\t\tNo tempo que vc tentou tirar a boca dela\n%c\tela se enrolou em vc sem vc ao menos perceber...", 186, 186);
                        fini();

                        ini();
                        printf("%c\t\t\tA cobre e muito forte...", 186);
                        printf("\n%c", 186);
                        printf("\n%c\t\tNo tempo que vc tentou tirar a boca dela\n%c\tela se enrolou em vc sem vc ao menos perceber...", 186, 186);
                        fini();

                        ini();
                        printf("%c\t\t\tVoce..\n%c\n", 186, 186);
                        printf("%c\t\tMORREU!!", 186);
                        fini();
                        longjmp(inicio, 1);
                        break;
                    
                    case 2 :
                        //Vc mata a cobra.
                        ini();
                        printf("%c\t\t\t     Voce acha um pau velho", 186);
                        printf("\n%c", 186);
                        printf("\n%c\t\t\tConsegue se soltar da cobra\n%c\t\te quebra o pau velho matando a cobra", 186, 186);
                        printf("\n%c", 186);
                        printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                        barr();
                        system("pause");
                        system("cls");
                        nivel(xp+=100);

                        ini();
                        printf("%c\t\t\tVoce corre na direcao da cidade", 186);
                        printf("\n%c", 186);
                        printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                        barr();
                        system("pause");
                        system("cls");
                        break;
                        }
                    }
                else {
                    ini();
                    printf("%c\t\tVoce errou e a manga cai em um buraco no chao.", 186);
                    printf("\n%c", 186);
                    printf("\n%c\t\tA cobra vai atras da manga dentro do buraco..", 186);
                    fini();

                    ini();
                    printf("%c\t\tVoce segue em seguranca em rumo a cidade", 186);
                    fini();
                    break;
                    }
                
            case 2 : 
            //Tentou correr da croba
                ini();
                printf("%c\t\tVc tenta correr mas a cobra e mais rapida...\n%c\t\tEla consegue morder sua canela, vc cai no chao..", 186, 186);
                fini();

                ini();
                printf("%c\t\tA cobra enorme se enrola rapidamente ao seu redor\n%c\t\t\tVc morre..", 186, 186);
                fini();
                longjmp(inicio, 1);
                break;
            
            case 3 :
            //tentou lutar
                ini();
                printf("%c\t\t\tVc tenta lutar contra a cobra", 186);
                fini();

                if((sor+5)<5){
                ini();
                printf("%c  %d de sorte.\n", 186, sor);
                printf("%c\t\t\tInfelizmente a cobra foi muito\n%c\t\tMais rapida que vc.. ela te enrola e...", 186, 186);
                fini();

                ini();
                printf("%c\t\t\tVOCE MORRE...", 186);
                fini();
                longjmp(inicio, 1);
                break;
                }

                else {
                    //Vc mata a cobra.
                ini();
                printf("%c\t\tCom muito esforco vc consegue esganar a cobra\n%c\tVoce vence a luta mas nao sai ileso, vc perdeu 7 de HP", 186, 186);
                printf("\n%c", 186);
                printf("\n%c  %d Hp\t %d Nivel", 186, hp-=7, nvl);
                barr();
                system("pause");
                system("cls");
                vida(hp);
                nivel(xp+100);

                ini();
                printf("%c\t\t\tVoce segue em rumo a cidade", 186);
                fini();
                break;
                }
            }
            }
            else {
                do{
                ini();
                printf("%c\t\tUma uma cobra gigante salta de uma arvore\n%c\tna sua frente e ela esta preparada para dar o bote..", 186, 186);
                printf("\n%c", 186);
                printf("\n%c\t1 - Tentar correr", 186);
                printf("\n%c\t2 - Tentar lutar com a cobra", 186);
                printf("\n%c", 186);
                printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                barr();
                scanf("%d", &opc2);
                system("cls");
                }while(opc2<1 || opc2>3);
            
                switch(opc2){
                    case 1:
                    //  Tentar correr.
                        ini();
                        printf("%c\t\tVc tenta correr mas a cobra e mais rapida...\n%c\t\tEla consegue morder sua canela, vc cai no chao..", 186, 186);
                        fini();

                        ini();
                        printf("%c\t\tA cobra enorme se enrola rapidamente ao seu redor\n%c\t\t\tVc morre..", 186, 186);
                        fini();
                        longjmp(inicio, 1);
                        break;

                    case 2:
                    //  Tentar lutar.
                        ini();
                        printf("%c\t\t\tVc tenta lutar contra a cobra", 186);
                        fini();

                        if((sor+5)<5){
                        ini();
                        printf("%c  %d de sorte.\n", 186,sor);
                        printf("%c\t\t\tInfelizmente a cobra foi muito\n%c\t\tMais rapida que vc.. ela te enrola e...", 186, 186);
                        fini();

                        ini();
                        printf("%c\t\t\tVOCE MORRE...", 186);
                        fini();
                        longjmp(inicio, 1);
                        break;
                        }

                        else {
                            //Vc mata a cobra.
                            ini();
                            printf("%c\t\tCom muito esforco vc consegue esganar a cobra\n%c\tVoce vence a luta mas nao sai ileso, vc perdeu 7 de HP", 186, 186);
                            printf("\n%c", 186);
                            printf("\n%c  %d Hp\t %d Nivel", 186, hp-=7, nvl);
                            barr();
                            system("pause");
                            system("cls");
                            vida(hp);
                            nivel(xp+100);

                            ini();
                            printf("%c\t\t\tVoce segue em rumo a cidade", 186);
                            fini();
                            break;
                        }     
                        }
            }
        }

        else{
            //      Voce teve sorte e foi direto pra cidade.
        ini();
        printf("%c  %d de sorte.\n", 186,sor);
        printf("%c\t\t\tVoce teve sorte!", 186);
        printf("\n%c\t\tCom sorte consegue despistar o que\n%c\t\tseja que estivese no mato.", 186, 186);
        fini();
        break;
        }
        break;
        case 2 : 
        // Voce corre na direação da cobra
        ini();
        printf("%c\t\t  Voce corre na direcao do barulho..", 186);
        fini();

        ini();
        printf("%c\t\t  UMA COBRA PULA NA SUA DIRECAO!", 186);
        printf("\n%c", 186);
        printf("\n%c\tEla morde o seu braco e comeca a se enrolar no seu corpo...", 186);
        printf("\n%c\t\t  Voce nao consegue fazer nada..", 186);
        fini();

        ini();
        printf("%c\t\t\tVOCE MORRE...", 186);
        fini();
        longjmp(inicio, 1);
        break;
        
        case 3 : {
            // Vc corre no desespero e consegue sair na vila.
        ini();
        printf("%c\t\tCom sorte vc consegue correr loucamente.\n%c\t\t\te sai da floresta", 186, 186);
        fini();
        break;
        }
    }
}

void cidade(){
    ini();
        printf("%c\t\t\tVoce chega ate a cidade!", 186);
        fini();

        ini();
        printf("%c\t\tE um pequeno vilarejo, pessoa vivendo\n%c\t\t\ta moda antiga!\n%c\n%c\tCasas de madeira, pilhas de lenha, comerciantes de rua,\n%c"
        "\n%c\tGalinhas andam soltas pela vila, criancas correm pra la\n%c\te pra ca as pessoas cuidam de ses afazeres, Voce ve pessoas\n%c"
        "\tcortando lenha, mulheres carregando cestas de vegetais", 186, 186, 186, 186, 186, 186, 186, 186);
        fini();

        ini();
        printf("%c\tVoce percebe umas criancas te olhando e cochichando\n%c\tAs pessoas pareciam muito ocupadas para se importarem\n%c\n%c\t\t\tcom sua presenca.", 186, 186, 186, 186);
        fini();
        
        do{
        ini();
        printf("%c\t\t\tO que decide fazer?\n", 186);
        printf("%c\t1 - Ir falar com as criancas.\n%c\t2 - Tentar falar com o cara cortando a lenha.\n%c\t3 - Andar um pouco pelo vilarejo.\n", 186, 186, 186);
        printf("%c", 186);
        barr();
        scanf(" %d", &opc);
        system("cls");
        }while(opc<1 || opc>3);

        switch(opc){
            case 1 : 
                //Ir falar com as crianças.
                do{
                ini();
                    printf("%c\t\tAs criancas comecam a cochichar entre si\n%c\t\tvc sente que elas estao te ignorando.\n", 186, 186);
                    printf("%c\t1 - 'Ola'\n%c\t2 - O que os fedelhos estao fazendo?", 186, 186);
                    printf("\n%c", 186);
                    printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                    barr();
                    scanf(" %d", &opc);
                    system("cls");
                }while(opc<1 || opc>2);
                
                switch(opc){
                    // Disse oi.
                    case 1 :
                        do{
                        ini();
                        printf("%c\t\tVc percebe que uma crianca te olha e disfarca\n%c\t\trapidamente, ela continuam cochichando e rindo.\n", 186, 186);
                        printf("%c\t1 - perguntar novamente 'Ola!?'\n%c", 186, 186);
                        printf("\t2 - Do que estao brincando?\n%c", 186);
                        printf("\t3 - Olhar ao redor.");
                        printf("\n%c", 186);
                        printf("\n%c  %d Hp\t %d Nivel", 186, hp, nvl);
                        barr();
                        scanf(" %d", &opc2);
                        system("cls");
                        }while(opc2<1 || opc2>3);

                        switch(opc2){
                            case 1 :
                            //          Olá de novo!
                                ini();
                                printf("%c\t\tAs criancas de ignoram e saem correndo.\n%c\t\tElas sao pequenas mas extremamente rapidas\n%c"
                                "\n%c\t\tElas somem em meio as casas.\n%c", 186, 186, 186, 186, 186);
                                fini();
                                break;
                            
                            case 2 :
                            //          Perguntar do ques estão brincando.
                                ini();
                                printf("%c\t\tUma das criancas chega perto de vc lentamente\n%c\t\tEla toca em vc rapidamente e sai correndo\n%c\t\t\t'TA COM VC TIO'", 186, 186, 186);
                                fini();

                                ini();
                                printf("\t\tAs criancas sao pequenas mas extremamente rapidas\n%c\t\tElas soemem em meio as casas.", 186);
                                fini();
                                break;
                            
                            case 3 :
                            //          Olhar ao redor.
                                if((sor+5)<5){
                                    //              Voltou pra primeira pergunta.
                                    do{
                                    ini();
                                    printf("%c  %d de sorte\n", 186, sor);
                                    printf("%c\t\tVc nao percebe nada de interessante.\n%c\n", 186, 186);
                                    printf("%c\t1 - perguntar novamente 'Ola!?'\n", 186);
                                    printf("%c\t2 - Do que estao brincando?\n%c", 186, 186);
                                    printf("\n%c", 186);
                                    printf("\n%c  %d Hp\t%d Nivel", 186, hp, nvl);
                                    barr();
                                    scanf("%d", &opc3);
                                    system("pause");
                                    system("cls");
                                    }while(opc3<1 || opc3>2);

                                    switch(opc2){
                                        case 1 :
                                            //          Olá de novo!
                                            ini();
                                            printf("%c\t\tAs criancas de ignoram e saem correndo.\n%c\t\tElas sao pequenas mas extremamente rapidas\n%c\n%c\t\tElas somem em meio as casas.\n", 186, 186, 186, 186);
                                            fini();
                                            break;
                            
                                        case 2 :
                                            //          Perguntar do ques estão brincando.
                                            ini();
                                            printf("%c\t\tUma das criancas chega perto de vc lentamente\n%c\t\tEla toca em vc rapidamente e sai correndo\n%c\t\t\t'TA COM VC TIO'", 186, 186, 186);
                                            fini();

                                            ini();
                                            printf("\t\tAs criancas sao pequenas mas extremamente rapidas\n%c\t\tElas soemem em meio as casas.", 186);
                                            fini();
                                            break;
                                            }
                                }
                                else {
                                    //  Voce teve sorte
                                    ini();
                                    printf("%c  %d de sorte.\n", 186,sor);
                                    printf("%c\t\tVc teria um missao secundaria aqui maaas\n%c\t\tVc ta numa DEMO, entao nao tem nada aqui :)", 186, 186);
                                    fini();

                                    do{
                                    ini();
                                    printf("%c\t\t\tO que decide fazer?\n", 186);
                                    printf("%c\t2 - Tentar falar com o cara cortando a lenha.\n%c\t3 - Andar um pouco pelo vilarejo.", 186, 186);
                                    fini();
                                    scanf(" %d", &opc);
                                    system("cls");
                                    }while(opc<2 || opc>3);
                                    
                                    break;
                                }
                    

                }

                // SER RUDE COM AS CRIANÇAS.
                    case 2 :
                        ini();
                        printf("%c\t\tVC E UMA PECIMA PESSOA. SAI DAQUI!", 186);
                        fini();
                        longjmp(inicio, 1);
                    break;
                }

            case 2 : 
                //Falar com o lenhador.
                ini();
                printf("\t\tO lenhador se assuta com vc e no susto\n%c\tEle te da uma maxadada na cabeca... vc morre.", 186);
                fini();
                longjmp(inicio, 1);
                break;

            case 3 : 
                //Andar pela vila.
                ini();
                printf("%c\t\tUm boi furioso aparece do nada e te mata...", 186);
                fini();
                longjmp(inicio, 1);
                break;
        }

        do{
        ini();
        printf("%c\t\t\tO que decide fazer?\n", 186);
        printf("%c\t1 - Tentar falar com o cara cortando a lenha.\n%c\t2 - Andar um pouco pelo vilarejo.", 186, 186);
        printf("\n%c\n", 186);
        scanf(" %d", &opc);
        }while(opc<1 || opc>3);
        system("pause");
        system("cls");

        switch(opc){
                case 1 : 
                //Falar com o lenhador.
                ini();
                printf("%c\t\tO lenhador se assuta com vc e no susto\n%c\tEle te da uma maxadada na cabeca... vc morre.", 186, 186);
                fini();
                longjmp(inicio, 1);
                break;

            case 2 : 
                //Andar pela vila.
                ini();
                printf("%c\t\tUm boi furioso aparece do nada e te mata...", 186);
                fini();
                longjmp(inicio, 1);
                break;
        }
}
