//*********************************************************
//* Trabalho 3 de Programacao de Computadores I - Batalha Naval
//* Curso de Sistemas da Informação
//* Aluno: Leonardo Pacheco - matricula: 50013523
//* Professor: Alex Salgado
//*******************************************************//



#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char jogador[100];
	int mapa [6][6] = { {1,1,0,0,0,1},
	                    {0,0,0,0,0,1},
						{0,1,0,0,0,0},
						{0,0,1,0,0,1},
						{1,0,0,1,1,0},
						{0,1,0,1,0,0}};
	int i, j;
	char controle[6][6];
	int continuar = 1;
	int score = 0;
	
	
	printf("\nJogador, qual o seu nome? ");
    scanf("%s", jogador);
    setbuf(stdin, NULL);
    
    

        for(i=1; i<6; i++){
             for(j=1; j<6; j++){
                      controle[i][j] = '.';
                      printf("%c  ", controle[i][j]);
             }
             printf("\n");
    }
    
    //primeira vez obrigatória de jogar
    printf("\n\nOlá %s vamos jogar...\n", jogador);
    printf("\nDigite o numero correspondente a linha:  ");
    scanf ("%d", &i);
    printf("\nDigite o numero correspondente a  Coluna:  ");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
    {
        controle[i][j] = 'X';
        score ++;
        printf("Bomba!!\n");
        printf("Seu score é de %d pontos\n", score);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
        
    }
    else
    {
        controle[i][j] = 'O';
        printf("Agua!!, que pena\n");
        printf("Seu score é de %d pontos\n", score);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
    }
    for(i=1; i<6; i++)
        { 
            for(j=1; j<6; j++)
            {
                printf("%c  ", controle[i][j]);
            }
            printf("\n");
        }
            
   //Começa o loop    
   while(continuar ==1)
   {
            printf("\nDigite o numero correspondente a linha:  ");
            scanf ("%d", &i);
            printf("\nDigite o numero correspondente a Coluna:  ");
            scanf("%d", &j);
            if(mapa[i][j] == 1)
            {
                controle[i][j] = 'X';
                score ++;
                printf("Bomba!!\n");
                printf("Seu score é de %d pontos\n", score);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
                
            }
            else
            {
                controle[i][j] = 'O';
                printf("Agua!!, que pena\n");
                printf("Seu score é de %d pontos\n", score);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
            }
            for(i=1; i<6; i++)
                { 
                    for(j=1; j<6; j++)
                    {
                        printf("%c  ", controle[i][j]);
                    }
                    printf("\n");
                }
                    
            
            
            
   }
   printf("Essas foram suas jogadas!\n\n%s obrigado por Jogar conosco!\n\n",jogador);
	return 0;
}