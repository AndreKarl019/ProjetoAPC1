#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int score = 0, pontos = 0, acertos = 0, loop = 1, check, randword, randomnum, replay, timer,t=5000;
    float mult;
    char questao[20][10];
    char word1[]="Bacon", word2[]="", word3[]="", word4[]="", word5[]="", word6[]="";
    char word7[]="", word8[]="", word9[]="", word10[]="", word11[]="", word12[]="", word13[]="";
    char word14[]="", word15[]="", word16[]="", word17[]="", word18[]="", word19[]="";
    char word20[]="", word21[]="",word22[]="",word23[]="",word24[]="",word25[]="";
    char wordx[]="", barra = 92;
    struct result_t {
        int questao;
        char palavra[10];
        int tempo;
        int score;
    };
    struct historico_t{
        int partida;
        int score;
    };
    struct result_t resultado[20];
    struct historico_t scoreboard[10];
    clock_t time1, time2;
    while(loop!=0){
        check = 0;
        randomnum = rand();
        randword = randomnum%5;
        //randword = 0;
        switch(randword){
            case 0:{
                time1 = clock();
                printf("______\n");                       
                printf("| ___ %c\n",barra);                   
                printf("| |_/ / __ _  ___ ___  _ __\n");  
                printf("| ___ %c/ _` |/ __/ _ %c| '_ %c \n",barra,barra,barra);
                printf("| |_/ / (_| | (_| (_) | | | |\n");
                printf("%c____/ %c__,_|%c___%c___/|_| |_|\n",barra,barra,barra,barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                printf("%.2f\n", mult);
                printf("%i\n", timer);
                if(timer<=t && strcmp(wordx,word1)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word1);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    resultado[acertos-1].palavra[10] = word1;
                    resultado[acertos-1].score = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word1)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    while(check!=1){    
                        printf("Voce quer tentar novamente?\n");
                        printf("1 - SIM // 2 - NAO \n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==2){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1 ou 2!\n");                           
                        }
                    }    
                }    }   
            }break;
    }
    return 0;
}