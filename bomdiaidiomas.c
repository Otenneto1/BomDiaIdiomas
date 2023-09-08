#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char bomdia[20];
  int i = 0;
  int k = 0;
  int controle = 0;


do{
  i = 0;
  k = 0;
  controle = 0;


  printf ("Digite seu bom dia: \n");
  fgets (bomdia, sizeof(bomdia), stdin);
  bomdia[strcspn(bomdia, "\n")] = '\0'; //Função strcspn para remover a quebra de linha da string.


  char *teste = strstr(bomdia, "bomdia-");//Função para testar se ao menos "bomdia-" esta contida no bomdia.


    if (strchr(bomdia, ' ') == NULL){//Primeiro if testa se a string inserida possui espaços.


        if (teste == NULL){  //Segundo if testa se ao menos "bomdia-" está na string.
            printf("\nOpção invalida, tente bomdia-h ou bomdia--help para ajuda\n"); //Se não tiver ao menos "bomdia-" na string, ele imprime que a opção não é válida e exibe a ajuda.

            }else {

            if (strcmp(bomdia, "bomdia--help") == 0 || strcmp(bomdia, "bomdia-h") == 0){

                printf ("1. O executável deverá ser inserido exatamente com uma opção de controle, assim:bomdia<opção>\n"
                "\n2. A <opção> será uma das alternativas abaixo: \n"
                "--help ou -h documentação do software\n"
                "--version ou -v versão do software \n"
                "a. --pt ou -1 idioma português \n"
                "b. --en ou -2 idioma inglês \n"
                "c. --es ou -3 idioma espanhol \n"
                "d. --fr ou -4 idioma francês \n"
                "e. --it ou -5 idioma italiano \n"
                "f. --co ou -6 idioma coreano \n"
                "g. --jp ou -7 idioma japonês \n"
                "h. --ru ou -8 idioma russo\n"
                "\n3. Apenas uma traduço por vez.\n");
                }else{

                    if (strcmp(bomdia, "bomdia--version") == 0 || strcmp(bomdia, "bomdia-v") == 0){

                        printf ("\nPrograma Bom Dia em Idiomas.\n"
                        "É um software livre com intuito de aprendizado acadêmico.\n"
                        "Versão 1.0 2023\n"
                        "Escrito por Expedito Ferreira de Lima Neto\n"
                        );
                    }else{

                        if (strcmp(bomdia, "bomdia--pt") == 0 || strcmp(bomdia, "bomdia-1") == 0){

                            printf ("Bom dia\n");
                            controle = 1;
                        }else{

                            if (strcmp(bomdia, "bomdia--en") == 0 || strcmp(bomdia, "bomdia-2") == 0){

                                printf ("Good morning\n");
                                controle = 1;
                            }else{

                                if (strcmp(bomdia, "bomdia--es") == 0 || strcmp(bomdia, "bomdia-3") == 0){

                                    printf ("Buenos días\n");
                                    controle = 1;
                                }else{

                                    if (strcmp(bomdia, "bomdia--fr") == 0 || strcmp(bomdia, "bomdia-4") == 0){

                                        printf ("Bonjour\n");
                                        controle = 1;
                                    }else{

                                        if (strcmp(bomdia, "bomdia--it") == 0 || strcmp(bomdia, "bomdia-5") == 0){

                                            printf ("Buongiorno\n");
                                            controle = 1;
                                        }else{

                                            if (strcmp(bomdia, "bomdia--co") == 0 || strcmp(bomdia, "bomdia-6") == 0){

                                                printf ("좋은 아침이에요\n");
                                                controle = 1;
                                            }else{

                                                if (strcmp(bomdia, "bomdia--jp") == 0 || strcmp(bomdia, "bomdia-7") == 0){

                                                    printf ("おはよう\n");
                                                    controle = 1;
                                                }else{

                                                    if (strcmp(bomdia, "bomdia--ru") == 0 || strcmp(bomdia, "bomdia-8") == 0){

                                                        printf ("Доброе утро\n");
                                                        controle = 1;
                                                    }else printf("Opção inválida, tente bomdia--help ou bomdia-h para ajuda.\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }


                if (controle == 1){ //Menu para saída do programa e se quer fazer mais uma tradução

                    do {
                    
		    	printf("\nDigite entre as opções: \n"
			"1. Para realizar uma tradução\n"
			"2. Sair do programa\n");

    			int validar = scanf("%d", &k);

    			if (validar != 1) {
        		printf("Opção inválida. Por favor, insira um número válido.\n");
        			while (getchar() != '\n'); // Limpa o buffer até a próxima quebra de linha
        			k = 0; 
    				} else {
        			getchar(); // Consumir o caractere de nova linha pendente no buffer

        		if (k == 2) {
            			i = 2;
        		}

        		if (k != 1 && k != 2) {
            			printf("Opção não existe, tente novamente.\n");
            			k = 0;
        			}
    			  }
			} while (k == 0);

                    }

            printf("\n");

        }

    }else printf("\nOpção inválida (Espaço em branco). Tente bomdia--help ou bomdia-h para ajuda\n");//Se houver espaços em branco na string, ele imprime que a opção não é válida e exibe a ajuda.


  }while (i == 0);

}
