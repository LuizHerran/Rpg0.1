#include "status.h"

int main(){
do{
        ini();
        printf("||\t\t\tO que decide fazer?\n");
        printf("||\t1 - Ir falar com as criancas.\n||\t2 - Tentar falar com o cara cortando a lenha.\n||\t3 - Andar um pouco pelo vilarejo.");
        printf("\n||");
        printf("\n||  %d Hp\n|| %d Nivel", vida(), nivel());
        printf("\n\\\\===============================================================//\n");
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
                        printf("||\t\tVC E UMA PECIMA PESSOA. SAI DAQUI!");
                        fini();
                        exit(0);
                    break;
                }

            case 2 : 
                //Falar com o lenhador.
                ini();
                printf("\t\tO lenhador se assuta com vc e no susto\n||\tEle te da uma maxadada na cabeca... vc morre.");
                fini();
                exit(0);
                break;

            case 3 : 
                //Andar pela vila.
                ini();
                printf("||\t\tUm boi furioso aparece do nada e te mata...");
                fini();
                exit(0);
                break;
            }
            
            }