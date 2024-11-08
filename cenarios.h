#include "status.h"

void mato(){
    //      Pegar nome do player
    ini();
    printf("||\t\tDigite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("||");
    fini();

    ini();
    printf("||\t\t\t\t%s", nome);
    printf("||\tApos se deitar para dormir em uma quarta-feira comum\n||\tVoce acorda em um sonho extremamente realista...\n||\tVoce se ve deitado em uma floresta, sentindo a grama\n||\t\t\tna sua pele.");
    fini();

    ini();
    printf("||\t\tPor algum motivo vc sente que tem 20 de vida.\n");
    printf("||\tIsso e esquisito agora vc sabe o quao ferido vc pode ficar\n||\t\t\tantes de...");
    fini();

    do{
    ini();
    printf("||\t\t\tAperte:\t\t\t\t");
    printf("\n||");
    printf("\n||\t\t1 - Levantar e olhar ao redor.");
    printf("\n||\t\t2 - Continar deitado.");
    printf("\n||");
    printf("\n||  %d Hp\t%d Nivel", vida(), nivel());
    printf("\n\\\\===============================================================//");
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
        printf("||\t\tVoce nao consegue dormir ou tentar acordar\t\t\t\t");
        printf("\n||");
        printf("\n||\t1 - Levantar e olhar ao redor.");
        printf("\n||");
        printf("\n||  %d Hp", vida());
        printf("\n\\\\===============================================================//");
        scanf("%d", &opc);
        system("cls");
        }while(!(opc==1));
        }
    do{
    ini();
    printf("||\t\tVoce esta em um campo aberto, perto de uma arvore.");
    printf("\n||\tA sua frente tem uma mata fechada e logo apos um morro\n||\t\t\tcom um vilarejo.");
    printf("\n||");
    printf("\n||\t\t1 - Ir ate a arvore.");
    printf("\n||\t\t2 - Tentar passar pela mata e chegar na cidade.");
    printf("\n||\t\t3 - Olhar mais ao redor.");
    printf("\n||");
    printf("\n||  %d Hp\t%d Nivel", vida(), nivel());
    printf("\n\\\\===============================================================//\n");
    scanf("%d", &opc);
    system("cls");
    }while(opc<1 || opc>3);

    switch(opc){
        case 1 :
                // VC VAI NA ARVORE.
            do{
            ini();
            printf("||\t\tVoce chega na arvore facilmente\n||\tA sombra e o vento fresco batendo na sua pele te faz se\n||\t\t\tsentir vivo!\n||");
            printf("\n||\t\t1 - Se sentar aos pes da arvore");
            printf("\n||\t\t2 - Tentar passar pela mata e chegar na cidade.");
            printf("\n||\t\t3 - Olhar mais ao redor.");
            printf("\n||");
            printf("\n||  %d Hp\t%d Nivel", vida(hp+1), nivel(xp+5));
            printf("\n\\\\===============================================================//\n");
            scanf("%d", &opc2);
            system("cls");
            }while(opc2<1||opc2>3);

            switch(opc2){
                case 1 : 
                    //              VC PEGA A MANGA.
                    ini();
                    printf("||\t\tVoce decide para um pouco para pensar\n||\te tentar entender o que aconteceu, infelizmente\n||\t\t\tnao a explicacao...\n");
                    printf("||\n");
                    printf("||\t\tUma manga cai do seu lado, ela parece apetitosa,\n||\t\tvoce pega ela e resolve guarda-la.");
                    printf("\n||");
                    printf("\n||  %d Hp\t%d Nivel", vida(), nivel(xp+10));
                    printf("\n\\\\===============================================================//\n");
                    system("pause");
                    system("cls");
                    inventario(1, "Manga", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                    qslot1=1;
                    system("pause");

                    do{
                    ini();
                    printf("||\t\tVoce esta realmente descansado.");
                    printf("\n||\tMas se sente extremamente desconfortavel com sua situacao");
                    printf("\n||");
                    printf("\n||\t\t1 - Tentar passar pela mata e chegar na cidade.");
                    printf("\n||\t\t2 - Olhar mais ao redor.");
                    printf("\n||");
                    printf("\n||  %d Hp\t%d Nivel", vida(), nivel());
                    printf("\n\\\\===============================================================//\n");
                    scanf("%d", &opc3);
                    system("cls");
                    }while(opc3<1||opc3>2);

                    switch(opc3){
                        //  Continuar a historia indo pra floresta.
                        case 1 : break;
                        //  Olha ao redor depois vai para a floresta.
                        case 2 : {
                    ini();
                    printf("||\t\t\tVoce so ve mato..");
                    fini();

                    ini();
                    printf("||\t\tEntao decide ir em direcao a cidade\n||\t\tvoce vai rumo a floresta.");
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
                    printf("||\t\t\tVoce so ve mato..");
                    fini();

                    ini();
                    printf("||\t\tEntao decide ir em direcao a cidade\n||\t\tvoce vai rumo a floresta.");
                    fini();
                    break;
    
            }
        //  Segue para a floresta.
        case 2 :
                break;
        
        case 3 : 
                // olhou ao redor.
                ini();
                printf("||\t\t\tVoce so ve mato..");
                fini();

                do{
                ini();
                printf("||\t\t\tVoce so ve mato..");
                printf("\n||\t\t1 - Ir ate a arvore.");
                printf("\n||\t\t2 - Tentar passar pela mata e chegar na cidade.");
                printf("\n||");
                printf("\n||  %d Hp\t%d Nivel", vida(), nivel());
                printf("\n\\\\===============================================================//\n");
                scanf("%d", &opc3);
                system("cls");
                }while(opc3<1 || opc3>2);

                switch(opc3){
                    //  Ir até a arvore.
                    case 1 : {
                        do{
                        ini();
                        printf("||\t\tVoce chega na arvore facilmente\n||\tA sombra e o vento fresco batendo na sua pele te faz se\n||\t\t\tsentir vivo!\n||");
                        printf("\n||\t\t1 - Se sentar aos pes da arvore");
                        printf("\n||\t\t2 - Tentar passar pela mata e chegar na cidade.");
                        printf("\n||");
                        printf("\n||  %d Hp\t%d Nivel", vida(hp+1), nivel(xp+5));
                        printf("\n\\\\===============================================================//\n");
                        scanf("%d", &opc2);
                        system("cls");
                        }while(opc2<1||opc2>3);

                        switch(opc2){
                            //  Se senta aos pes da arvore
                            case 1 : {
                                //              Vc pega a manga.
                                ini();
                                printf("||\t\tVoce decide para um pouco para pensar\n||\te tentar entender o que aconteceu, infelizmente\n||\t\t\tnao a explicacao...\n");
                                printf("||\n");
                                printf("||\t\tUma manga cai do seu lado, ela parece apetitosa,\n||\t\tvoce pega ela e resolve guarda-la.");
                                printf("\n||");
                                printf("\n||  %d Hp\t%d Nivel", vida(), nivel(xp+10));
                                printf("\n\\\\===============================================================//\n");
                                system("pause");
                                system("cls");
                                inventario(1, "Manga", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                                
                                do{
                                    ini();
                                    printf("||\t\tVoce esta realmente descansado.");
                                    printf("\n||\tMas se sente extremamente desconfortavel com sua situacao");
                                    printf("\n||");
                                    printf("\n||\t\t1 - Tentar passar pela mata e chegar na cidade.");
                                    printf("\n||\t\t2 - Olhar mais ao redor.");
                                    printf("\n||");
                                    printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                                    printf("\n\\\\===============================================================//\n");
                                    scanf("%d", &opc3);
                                    system("cls");
                                    }while(opc3<1||opc3>2);

                                    switch(opc3){
                                        //  Segue para a floresta.
                                        case 1 : break;
                                        //  olha ao redore e segue para a floresta.
                                        case 2 : {
                                                ini();
                                                printf("||\t\tVoce so ve mato..");
                                                fini();

                                                ini();
                                                printf("||\t\tEntao decide ir em direcao a cidade\n||\t\tvoce vai rumo a floresta.");
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
                    printf("||\t\t\tVoce so ve mato..");
                    fini();

                    ini();
                    printf("||\t\tEntao decide ir em direcao a cidade\n||\t\tvoce vai rumo a floresta.");
                    fini();
                    break;
                            }
                            }
                            }
                }
}

void floresta(){
    ini();
    printf("||\t\t\tVoce entra na mata denca..\n");
    printf("||\t\tVoce escuta um barulho no meio da mata..");
    fini();

    do{
    ini();
    printf("||\t\tVoce nao sabe oq e nem de onde vem\n||\t\t mas escuta muitas folhas se mexendo..");
    printf("\n||");
    printf("\n||\t1 - Correr na direcao da cidade.");
    printf("\n||\t2 - Correr na direcao do barulho");
    printf("\n||\t3 - Apenas correr em desespero!");
    printf("\n||");
    printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
    printf("\n\\\\===============================================================//\n");
    scanf("%d", &opc);
    system("cls");
    }while(opc<1||opc>3);

    switch(opc){
        case 1 : 
        //Chance de encontrar a cobra
        if((sor-5)<5){
            ini();
            printf("||%d de sorte.\n",sor);
            printf("||\t\t\tNao e seu dia de sorte...");
            fini();
            if(qslot1==1){
            do{
            ini();
            printf("||\t\tUma uma cobra gigante salta de uma arvore\n||\tna sua frente e ela esta preparada para dar o bote..");
            printf("\n||");
            printf("\n||\t1 - Jogar a manga nela");
            printf("\n||\t2 - Tentar correr");
            printf("\n||\t3 - Tentar lutar com a cobra");
            printf("\n||");
            printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
            printf("\n\\\\===============================================================//\n");
            scanf("%d", &opc2);
            system("cls");
            }while(opc2<1 || opc2>3);
            
            switch(opc2){

                case 1 : 
                //Jogou a manga na croba.
                if((sor+4)>4){
                ini();
                printf("||%d de sorte.\n",sor);
                printf("||\t\tVoce aceta a manga na cabeca dela!");
                printf("\n||\tParabens voce acaba de deixar ela com muuuito\n||\t\t\tmais raiva!");
                printf("\n||");
                printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel(xp+5));
                printf("\n\\\\===============================================================//\n");
                system("pause");
                system("cls");

                ini();
                printf("||\t\t\tCara era uma manga!");
                printf("\n||\t\tVoce pensou mesmo em matar uma\n||\t\t\tcobra com uma manga?");
                fini();

                ini();
                printf("||\t\t\tTa... vou te dar essa chance..");
                printf("\n||\tAperta 'Enter' ai e bora ver se a sorte \n||\t\t\testara do seu lado..");
                fini();

                ini();
                printf("||\t\tEntao... como posso dizer isso..");
                printf("\n||\t\tSua sorte foi 3.. Nem te ajudando\n||\t\tvc consegue fazer algo em..");
                fini();

                //      Vc leva uma pikada.
                ini();
                printf("||\t\tEntao... como posso dizer isso..");
                printf("\n||\t\tC levou uma bela de uma picada :]");
                printf("\n||");
                printf("\n||\t\t\t-10 de vida..");
                printf("\n||  %d Hp\n|| %d Nivel", vida(hp-10), nivel());
                printf("\n\\\\===============================================================//\n");
                inventario(0, "Vazio", 0, "Vazio", 0, "Vazio", 0, "Vazio");
                system("pause");
                system("cls");

                do{
                ini();
                printf("||\t\t\tvoce esta com muita do...");
                printf("\n||");
                printf("\n||\t1 - Tentar tirar a cobra de sua perna.");
                printf("\n||\t2 - Procurar algo ao redor");
                printf("\n||");
                printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                printf("\n\\\\===============================================================//\n");
                scanf("%d", &opc3);
                system("cls");
                }while(opc3<1||opc3>2);

                switch(opc3){
                    case 1 :
                        ini();
                        printf("||\t\t\tA cobre e muito forte...");
                        printf("\n||");
                        printf("\n||\t\tNo tempo que vc tentou tirar a boca dela\n||\tela se enrolou em vc sem vc ao menos perceber...");
                        fini();

                        ini();
                        printf("||\t\t\tA cobre e muito forte...");
                        printf("\n||");
                        printf("\n||\t\tNo tempo que vc tentou tirar a boca dela\n||\tela se enrolou em vc sem vc ao menos perceber...");
                        fini();

                        ini();
                        printf("||\t\t\tVoce..\n||\n");
                        printf("||\t\tMORREU!!");
                        fini();
                        exit(0);
                        break;
                    
                    case 2 :
                        //Vc mata a cobra.
                        ini();
                        printf("||\t\t\t     Voce acha um pau velho");
                        printf("\n||");
                        printf("\n||\t\t\tConsegue se soltar da cobra\n||\t\te quebra o pau velho matando a cobra");
                        printf("\n||");
                        printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel(xp+=100));
                        printf("\n\\\\===============================================================//\n");
                        system("pause");
                        system("cls");

                        ini();
                        printf("||\t\t\tVoce corre na direcao da cidade");
                        printf("\n||");
                        printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                        printf("\n\\\\===============================================================//\n");
                        system("pause");
                        system("cls");
                        break;
                        }
                    }
                else {
                    ini();
                    printf("||\t\tVoce errou e a manga cai em um buraco no chão.");
                    printf("\n||");
                    printf("\n||\t\tA cobra vai atras da manga dentro do buraco..");
                    fini();

                    ini();
                    printf("||\t\tVoce segue em seguranca em rumo a cidade");
                    fini();
                    break;
                    }
                
            case 2 : 
            //Tentou correr da croba
                ini();
                printf("||\t\tVc tenta correr mas a cobra e mais rapida...\n||\t\tEla consegue morder sua canela, vc cai no chao..");
                fini();

                ini();
                printf("||\t\tA cobra enorme se enrola rapidamente ao seu redor\n||\t\t\tVc morre..");
                fini();
                exit(0);
                break;
            
            case 3 :
            //tentou lutar
                ini();
                printf("||\t\t\tVc tenta lutar contra a cobra");
                fini();

                if((sor+5)<5){
                ini();
                printf("|| %d de sorte.\n",sor);
                printf("||\t\t\tInfelizmente a cobra foi muito\n||\t\tMais rapida que vc.. ela te enrola e...");
                fini();

                ini();
                printf("||\t\t\tVOCE MORRE...");
                fini();
                exit(0);
                break;
                }

                else {
                    //Vc mata a cobra.
                ini();
                printf("||\t\t\tCom muito esforco vc consegue esganar a cobra\n||\t\tVoce vence a luta mas nao sai ileso, vc perdeu 7 de HP");
                printf("\n||");
                printf("\n||  %d Hp\n|| %d Nivel", vida(hp-7), nivel(xp+100));
                printf("\n\\\\===============================================================//\n");
                system("pause");
                system("cls");

                ini();
                printf("||\t\t\tVoce segue em rumo a cidade");
                fini();
                break;
                }
            }
            }
            else {
                do{
                ini();
                printf("||\t\tUma uma cobra gigante salta de uma arvore\n||\tna sua frente e ela esta preparada para dar o bote..");
                printf("\n||");
                printf("\n||\t1 - Tentar correr");
                printf("\n||\t2 - Tentar lutar com a cobra");
                printf("\n||");
                printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                printf("\n\\\\===============================================================//\n");
                scanf("%d", &opc2);
                system("cls");
                }while(opc2<1 || opc2>3);
            
                switch(opc2){
                    case 1:
                    //  Tentar correr.
                        ini();
                        printf("||\t\tVc tenta correr mas a cobra e mais rapida...\n||\t\tEla consegue morder sua canela, vc cai no chao..");
                        fini();

                        ini();
                        printf("||\t\tA cobra enorme se enrola rapidamente ao seu redor\n||\t\t\tVc morre..");
                        fini();
                        exit(0);
                        break;

                    case 2:
                    //  Tentar lutar.
                        ini();
                        printf("||\t\t\tVc tenta lutar contra a cobra");
                        fini();

                        if((sor+5)<5){
                        ini();
                        printf("|| %d de sorte.\n",sor);
                        printf("||\t\t\tInfelizmente a cobra foi muito\n||\t\tMais rapida que vc.. ela te enrola e...");
                        fini();

                        ini();
                        printf("||\t\t\tVOCE MORRE...");
                        fini();
                        exit(0);
                        break;
                        }

                        else {
                            //Vc mata a cobra.
                            ini();
                            printf("||\t\t\tCom muito esforco vc consegue esganar a cobra\n||\t\tVoce vence a luta mas nao sai ileso, vc perdeu 7 de HP");
                            printf("\n||");
                            printf("\n||  %d Hp\n|| %d Nivel", vida(hp-7), nivel(xp+100));
                            printf("\n\\\\===============================================================//\n");
                            system("pause");
                            system("cls");

                            ini();
                            printf("||\t\t\tVoce segue em rumo a cidade");
                            fini();
                            break;
                        }
                        }
            }
        }

        else{
            //      Voce teve sorte e foi direto pra cidade.
        ini();
        printf("|| %d de sorte.\n",sor);
        printf("||\t\t\tVoce teve sorte!");
        printf("\n||\t\tCom sorte consegue despistar o que\n||\t\tseja que estivese no mato.");
        fini();
        break;
        }

        case 2 : 
        // Voce corre na direação da cobra
        ini();
        printf("||\t\t\tVoce corre na direcao do barulho..");
        fini();

        ini();
        printf("||\t\t\tUMA COBRA PULA NA SUA DIRECAO!");
        printf("\n||");
        printf("\n||\t\tEla morde o seu braco e comeca a se enrolar no seu corpo...");
        printf("\n||\t\t\tVoce nao consegue fazer nada..");
        fini();

        ini();
        printf("||\t\t\tVOCE MORRE...");
        fini();
        exit(0);
        break;
        

        case 3 : {
        ini();
        printf("||\t\t\tCom sorte vc consegue correr loucamente.\n||\t\t\t\te sai da floresta");
        fini();
        break;
        }


    }
}

void cidade(){
    ini();
        printf("||\t\t\tVoce chega ate a cidade!");
        fini();

        ini();
        printf("||\t\tE um pequeno vilarejo, pessoa vivendo\n||\t\ta moda antiga!\n||\n||\tCasas de madeira, pilhas de lenha, comerciantes de rua,\n||\n||\tGalinhas andam soltas pela vila, criancas correm pra la\n||\te pra ca as pessoas cuidam de ses afazeres, Voce ve pessoas\n||\tcortando lenha, mulheres carregando cestas de vegetais");
        fini();

        ini();
        printf("||\t\tVoce percebe umas criancas te olhando e cochichando\n||\tAs pessoas pareciam muito ocupadas para se importarem\n||\n||\t\t\tcom sua presenca.");
        fini();
        
        do{
        ini();
        printf("||\t\t\tO que decide fazer?\n");
        printf("||\t1 - Ir falar com as criancas.\n||\t2 - Tentar falar com o cara cortando a lenha.\n||\t3 - Andar um pouco pelo vilarejo.");
        fini();
        scanf(" %d", &opc);
        system("pause");
        system("cls");
        }while(opc<1||opc>3);

        switch(opc){
            case 1 : 
                //Ir falar com as crianças.
                do{
                ini();
                    printf("||\t\tAs criancas comecam a cochichar entre si\n||\t\tvc sente que elas estao te ignorando.\n");
                    printf("||\t1 - 'Ola'\n||\t2 - O que os fedelhos estao fazendo?");
                    printf("\n||");
                    printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                    printf("\n\\\\===============================================================//\n");
                    scanf("%d", &opc);
                    system("pause");
                    system("cls");
                }while(opc<1||opc>2);
                
                switch(opc){
                    // Disse oi.
                    case 1 :
                        do{
                        ini();
                        printf("||\t\tVc percebe que uma crianca te olha e disfarca\n||\t\trapidamente, ela continuam cochichando e rindo.\n");
                        printf("||\t1 - perguntar novamente 'Ola!?'\n||");
                        printf("\t2 - Do que estao brincando?\n||");
                        printf("\t3 - Olhar ao redor.");
                        printf("\n||");
                        printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
                        printf("\n\\\\===============================================================//\n");
                        scanf("%d", &opc2);
                        system("pause");
                        system("cls");
                        }while(opc2<1||opc2>3);

                        switch(opc2){
                            case 1 :
                            //          Olá de novo!
                                ini();
                                printf("||\t\tAs criancas de ignoram e saem correndo.\n||\t\tElas sao pequenas mas extremamente rapidas\n||\n||\t\tElas somem em meio as casas.\n");
                                fini();
                                break;
                            
                            case 2 :
                            //          Perguntar do ques estão brincando.
                                ini();
                                printf("||\t\tUma das criancas chega perto de vc lentamente\n||\t\tEla toca em vc rapidamente e sai correndo\n||\t\t\t'TA COM VC TIO'");
                                fini();

                                ini();
                                printf("\t\tAs criancas sao pequenas mas extremamente rapidas\n||\t\tElas soemem em meio as casas.");
                                fini();
                                break;
                            
                            case 3 :
                            //          Olhar ao redor.
                                if((sor+5)<5){
                                    //              Voltou pra primeira pergunta.
                                    do{
                                    ini();
                                    printf("|| %d de sorte\n", sor);
                                    printf("||\t\tVc nao percebe nada de interessante.\n||\n");
                                    printf("||\t1 - perguntar novamente 'Ola!?'\n");
                                    printf("||\t2 - Do que estao brincando?\n||");
                                    printf("\n||");
                                    printf("\n||  %d Hp\t%d Nivel", vida(), nivel());
                                    printf("\n\\\\===============================================================//\n");
                                    scanf("%d", &opc3);
                                    system("pause");
                                    system("cls");
                                    }while(opc3<1||opc3>2);

                                    switch(opc2){
                                        case 1 :
                                            //          Olá de novo!
                                            ini();
                                            printf("||\t\tAs criancas de ignoram e saem correndo.\n||\t\tElas sao pequenas mas extremamente rapidas\n||\n||\t\tElas somem em meio as casas.\n");
                                            fini();
                                            break;
                            
                                        case 2 :
                                            //          Perguntar do ques estão brincando.
                                            ini();
                                            printf("||\t\tUma das criancas chega perto de vc lentamente\n||\t\tEla toca em vc rapidamente e sai correndo\n||\t\t\t'TA COM VC TIO'");
                                            fini();

                                            ini();
                                            printf("\t\tAs criancas sao pequenas mas extremamente rapidas\n||\t\tElas soemem em meio as casas.");
                                            fini();
                                            break;
                                            }
                                }
                                else {
                                    //  Voce teve sorte
                                    ini();
                                    printf("|| %d de sorte.\n",sor);
                                    printf("||\t\tVc teria um missao secundaria aqui maaas\n||\t\tVc ta numa DEMO, entao nao tem nada aqui :)");
                                    fini();
                                    break;
                                }
                    

                }

                // SER RUDE COM AS CRIANÇAS.
                    case 2 :
                        ini();
                        printf("||\t\t");
                        fini();
                    break;
                }

            case 2 : 
                //Falar com o lenhador.
                ini();

                fini();

                break;

            case 3 : 
                //Andar pela vila.
                ini();

                fini();

                break;
        }
}