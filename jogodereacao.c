#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int score = 0, acertos = 0, loop = 1, check = 0, randword, randomnum, replay, timer,t=5000, k = 0;
    float mult, pontos = 0;
    char word1[]="Bacon", word2[]="Veneno", word3[]="Jackpot", word4[]="Oraculo", word5[]="Papelao", word6[]="Osmose";
    char word7[]="chamine", word8[]="Ignorante", word9[]="Entrometida", word10[]="Pateta", word11[]="Farrapo", word12[]="Limitado", word13[]="Inutil";
    char word14[]="Fascista", word15[]="Sepultura", word16[]="Energumero", word17[]="iludida", word18[]="Tagarela", word19[]="Tardigrado";
    char word20[]="Musical",word21[]="Hide", wordx[]=" ", barra = 92;
    struct result_t {
        int questao;
        char palavra[10];
        int tempo;
        int nota;
    };
    struct historico_t{
        int partida;
        int pontuacao;
    };
    struct result_t resultado[20];
    struct historico_t scoreboard[10];
    clock_t time1, time2;
    /*for(int i = 0; i<20; i++){
        memset(resultado[i].palavra, 0, sizeof(resultado[i].palavra));
        resultado[i].tempo = 0;
        resultado[i].questao = 0;
        resultado[i].nota = 0;
    }
    for(int i = 0; i<10; i++){
        scoreboard[i].pontuacao = 0;
        scoreboard[i].partida = 0;
    }*/
    while(loop!=0){
        int a = 0;
        int b = 0;
        check = 0;
        char wordx[]=" ";
        randomnum = rand();
        randword = randomnum%21;
        //randword = 1;
        for(int i = 0; i<21;i++){
        }
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
                if(timer<=t && strcmp(wordx,word1)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word1);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word1);
                    resultado[acertos-1].nota = pontos;
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
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao =  score;
                    for(int i = 0; i < k+1; i++){
                        for(int j = 0; j < k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break; 
            case 1:{
                time1 = clock();
                printf(" _   _ \n");                            
                printf("| | | |\n");                          
                printf("| | | | ___ _ __   ___ _ __   ___ \n"); 
                printf("| | | |/ _ %c '_ %c / _ %c '_ %c / _ %c\n",barra,barra,barra,barra,barra); 
                printf("%c %c_/ /  __/ | | |  __/ | | | (_) |\n",barra,barra);
                printf(" %c___/ %c___|_| |_|%c___|_| |_|%c___/\n",barra,barra,barra,barra); 
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word2)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word2);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word2);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word2)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 2:{
                time1 = clock();
                printf("   ___            _                _  \n"); 
                printf("  |_  |          | |              | |\n");
                printf("    | | __ _  ___| | ___ __   ___ | |_\n") ;
                printf("    | |/ _` |/ __| |/ / '_ %c / _ %c| __|\n", barra, barra);
                printf("/%c__/ / (_| | (__|   <| |_) | (_) | |_ \n", barra);
                printf("%c____/ %c__,_|%c___|_|%c_%c .__/ %c___/ %c__|\n", barra, barra, barra, barra, barra, barra, barra);
                printf("                      | |       \n");       
                ("                      |_|    \n");
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word3)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word3);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word3);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word3)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 3:{
                time1 = clock();
                printf(" _____                      _\n");       
                printf("|  _  |                    | | \n");     
                printf("| | | |_ __ __ _  ___ _   _| | ___  \n");
                printf("| | | | '__/ _` |/ __| | | | |/ _ %c \n", barra);
                printf("%c %c_/ / | | (_| | (__| |_| | | (_) |\n", barra, barra);
                printf(" %c___/|_|  %c__,_|%c___|%c__,_|_|%c___/\n", barra, barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word4)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word4);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word4);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word4)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 4:{
                time1 = clock();
                printf("______                _   \n");         
                printf("| ___ %c              | |    \n", barra);        
                printf("| |_/ /_ _ _ __   ___| | __ _  ___  \n");
                printf("|  __/ _` | '_ %c / _ %c |/ _` |/ _ %c \n", barra, barra, barra);
                printf("| | | (_| | |_) |  __/ | (_| | (_) |\n");
                printf("%c_|  %c__,_| .__/ %c___|_|%c__,_|%c___/ \n", barra, barra, barra, barra, barra);
                printf("         | |                       \n");
                printf("         |_|\n");
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word5)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word5);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word5);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word5)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao =  score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 5:{
                time1 = clock();
                printf(" _____    \n");                           
                printf("|  _  |      \n") ;                       
                printf("| | | | ___ _ __ ___   ___  ___  ___\n"); 
                printf("| | | |/ __| '_ ` _ %c / _ %c/ __|/ _ %c\n", barra, barra);
                printf("%c %c_/ /%c__ %c | | | | | (_) %c__ %c  __/\n", barra, barra, barra, barra, barra, barra);
                printf(" %c___/ |___/_| |_| |_|%c___/|___/%c___|\n", barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word6)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word6);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word6);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word6)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao =  score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 6:{
                time1 = clock();
                 printf("      _                     _\n");            
                 printf("     | |                   (_)        \n");   
                 printf("  ___| |__   __ _ _ __ ___  _ _ __   ___\n"); 
                printf(" / __| '_ %c / _` | '_ ` _ %c| | '_ %c / _ %c\n", barra, barra, barra, barra);
                printf("| (__| | | | (_| | | | | | | | | | |  __/\n");
                printf(" %c___|_| |_|%c__,_|_| |_| |_|_|_| |_|%c___|\n", barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word7)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word7);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word7);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word7)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 7:{
                time1 = clock();
                printf(" _____                                  _ \n");      
                printf("|_   _|                                | |      \n");
                printf("  | |  __ _ _ __   ___  _ __ __ _ _ __ | |_ ___ \n");
                printf("  | | / _` | '_ %c / _ %c| '__/ _` | '_ %c| __/ _ %c\n", barra, barra, barra, barra);
                printf(" _| || (_| | | | | (_) | | | (_| | | | | ||  __/\n");
                printf(" %c___/%c__, |_| |_|%c___/|_|  %c__,_|_| |_|%c__%c___|\n", barra, barra, barra, barra, barra, barra);
                printf("       __/ | \n");                                   
                printf("      |___/   \n"); 
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word8)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word8);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word8);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word8)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 8:{
                time1 = clock();
                printf(" _____      _                            _   _     _\n");       
                printf("|  ___|    | |                          | | (_)   | |      \n");
                printf("| |__ _ __ | |_ _ __ ___  _ __ ___   ___| |_ _  __| | __ _ \n");
                printf("|  __| '_ %c| __| '__/ _ %c| '_ ` _ %c / _ %c __| |/ _` |/ _` |\n", barra, barra, barra, barra);
                printf("| |__| | | | |_| | | (_) | | | | | |  __/ |_| | (_| | (_| |\n");
                printf("%c____/_| |_|%c__|_|  %c___/|_| |_| |_|%c___|%c__|_|%c__,_|%c__,_|\n", barra, barra, barra, barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word9)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word9);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word9);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word9)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 9:{
                time1 = clock();
                printf("______     _       _ \n");       
                printf("| ___ %c   | |     | |       \n", barra);
                printf("| |_/ /_ _| |_ ___| |_ __ _ \n");
                printf("|  __/ _` | __/ _ %c __/ _` |\n", barra);
                printf("| | | (_| | ||  __/ || (_| |\n");
                printf("%c_|  %c__,_|%c__%c___|%c__%c__,_|\n", barra, barra, barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word10)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word10);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word10);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word10)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 10:{
                time1 = clock();
                printf("______                             \n");  
                printf("|  ___|                             \n"); 
                printf("| |_ __ _ _ __ _ __ __ _ _ __   ___  \n");
                printf("|  _/ _` | '__| '__/ _` | '_ %c / _ %c\n", barra, barra); 
                printf("| || (_| | |  | | | (_| | |_) | (_) |\n");
                printf("%c_| %c__,_|_|  |_|  %c__,_| .__/ %c___/ \n", barra, barra, barra, barra);
                printf("                        | |\n");         
                printf("                        |_|\n");
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word11)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word11);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word11);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word11)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 11:{
                time1 = clock();
                printf(" _     _           _ _            _\n");       
                printf("| |   (_)         (_) |          | |      \n");
                printf("| |    _ _ __ ___  _| |_ __ _  __| | ___  \n");
                printf("| |   | | '_ ` _ %c| | __/ _` |/ _` |/ _ %c \n", barra, barra);
                printf("| |___| | | | | | | | || (_| | (_| | (_) |\n");
                printf("%c_____/_|_| |_| |_|_|%c__%c__,_|%c__,_|%c___/\n", barra, barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word12)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word12);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word12);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word12)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 12:{
                time1 = clock();
                printf(" _____            _   _ _\n"); 
                printf("|_   _|          | | (_) |\n");
                printf("  | | _ __  _   _| |_ _| |\n");
                printf("  | || '_ %c| | | | __| | |\n", barra);
                printf(" _| || | | | |_| | |_| | |\n");
                printf(" %c___/_| |_|%c__,_|%c__|_|_|\n", barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word13)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word13);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word13);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word13)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 13:{
                time1 = clock();
                printf("______             _     _        \n");
                printf("|  ___|           (_)   | |       \n");
                printf("| |_ __ _ ___  ___ _ ___| |_ __ _ \n");
                printf("|  _/ _` / __|/ __| / __| __/ _` |\n");
                printf("| || (_| %C__ %c (__| %c__ %c || (_| |\n", barra, barra, barra, barra);
                printf("%c_| %c__,_|___/%c___|_|___/%c__%c__,_|\n", barra, barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word14)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word14);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word14);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word14)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 14:{
                time1 = clock();
                printf(" _____                  _ _ \n");                  
                printf("/  ___|                | | |   \n");               
                printf("%c `--.  ___ _ __  _   _| | |_ _   _ _ __ __ _ \n", barra);
                printf(" `--. %c/ _ %c '_ %c| | | | | __| | | | '__/ _` |\n", barra, barra, barra);
                printf("/%c__/ /  __/ |_) | |_| | | |_| |_| | | | (_| |\n", barra);
                printf("%c____/ %c___| .__/ %c__,_|_|%c__|%c__,_|_|  %c__,_|\n", barra, barra, barra, barra, barra, barra);
                printf("           | | \n");                               
                printf("           |_|  \n");   
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word15)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word15);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word15);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word15)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 15:{
                time1 = clock();
                printf(" _____      \n");                                              
                printf("|  ___|      \n");                                             
                printf("| |__ _ __   ___ _ __ __ _ _   _ _ __ ___   ___ _ __ ___ \n"); 
                printf("|  __| '_ %c / _ %c '__/ _` | | | | '_ ` _ %c / _ %c '__/ _ %c \n", barra, barra, barra, barra, barra);
                printf("| |__| | | |  __/ | | (_| | |_| | | | | | |  __/ | | (_) | \n");
                printf("%c____/_| |_|%c___|_|  %c__, |%c__,_|_| |_| |_|%c___|_|  %c___/  \n", barra, barra, barra, barra, barra, barra);
                printf("                      __/ |    \n");                           
                printf("                     |___/     \n");                          
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word16)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word16);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word16);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word16)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 16:{
                time1 = clock();
                printf(" _ _           _ _     _ \n");      
                printf("(_) |         | (_)   | |   \n");   
                printf(" _| |_   _  __| |_  __| | __ _ \n");
                printf("| | | | | |/ _` | |/ _` |/ _` |\n");
                printf("| | | |_| | (_| | | (_| | (_| |\n");
                printf("|_|_|%c__,_|%c__,_|_|%c__,_|%c__,_|\n", barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word17)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word17);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word17);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word17)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 17:{
                time1 = clock();
                printf(" _____                          _ \n");      
                printf("|_   _|                        | |      \n");
                printf("  | | __ _  __ _  __ _ _ __ ___| | __ _ \n");
                printf("  | |/ _` |/ _` |/ _` | '__/ _ %c |/ _` |\n", barra);
                printf("  | | (_| | (_| | (_| | | |  __/ | (_| |\n");
                printf("  %c_/%c__,_|%c__, |%c__,_|_|  %c___|_|%c__,_|\n", barra, barra, barra, barra, barra, barra);
                printf("            __/ |                       \n");
                printf("           |___/  \n");
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word18)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word18);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word18);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word18)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 18:{
                time1 = clock();
                printf(" _____             _ _                     _ \n");      
                printf("|_   _|           | (_)                   | |\n");      
                printf("  | | __ _ _ __ __| |_  __ _ _ __ __ _  __| | ___\n");  
                printf("  | |/ _` | '__/ _` | |/ _` | '__/ _` |/ _` |/ _ %c \n", barra);
                printf("  | | (_| | | | (_| | | (_| | | | (_| | (_| | (_) |\n");
                printf("  %c_/%c__,_|_|  %c__,_|_|%c__, |_|  %c__,_|%c__,_|%c___/ \n", barra, barra, barra, barra, barra, barra, barra);
                printf("                        __/ |     \n");                 
                printf("                       |___/\n");
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word19)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word19);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word19);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word19)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 19:{
                time1 = clock();
                printf("___  ___          _           _ \n");
                printf("|  %c/  |         (_)         | |\n", barra);
                printf("| .  . |_   _ ___ _  ___ __ _| |\n");
                printf("| |%c/| | | | / __| |/ __/ _` | |\n", barra);
                printf("| |  | | |_| %c__ %c | (_| (_| | |\n", barra, barra);
                printf("%c_|  |_/%c__,_|___/_|%c___%c__,_|_|\n", barra, barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word20)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word20);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word20);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word20)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break;
             case 20:{
                time1 = clock();
                printf(" _   _ _     _      \n");
                printf("| | | (_)   | |     \n");
                printf("| |_| |_  __| | ___ \n");
                printf("|  _  | |/ _` |/ _ %c\n", barra);
                printf("| | | | | (_| |  __/\n");
                printf("%c_| |_/_|%c__,_|%c___|\n", barra, barra, barra);
                printf("Qual a palavra? \n");
                scanf("%[^\n]s",wordx);
                while(getchar()!='\n');
                time2 = clock() - time1;
                timer = time2*500/CLOCKS_PER_SEC;
                mult = 1 + (1000.f/timer);
                if(timer<=t && strcmp(wordx,word21)==0){
                    acertos++;
                    pontos = acertos*acertos*50*mult*sizeof(word21);
                    resultado[acertos-1].questao = acertos;
                    resultado[acertos-1].tempo = timer;
                    strcpy(resultado[acertos-1].palavra,word21);
                    resultado[acertos-1].nota = pontos;
                    score = score + pontos;     
                    t = 7*t/8;        
                    }else{ 
                        if(timer>t&&(strcmp(wordx,word21)!=0)){
                            printf("Voce demorou demais E errou a palavra!\n");
                        }else if(timer>t){
                            printf("Tempo esgotado\n");
                        }else{
                            printf("Errado!\n");
                        }
                    printf("Voce teve um total de %i acertos e sua pontuacao final foi de %i pontos!\n", acertos, score);
                    scoreboard[k].partida = k + 1;
                    scoreboard[k].pontuacao = score;
                    for(int i = 0; i < k+1 ; i++){
                        for(int j = 0; j< k+1; j++){
                            if(scoreboard[j].pontuacao<scoreboard[i].pontuacao){
                                a = scoreboard[j].pontuacao;
                                b = scoreboard[i].pontuacao;
                                scoreboard[i].pontuacao = a;
                                scoreboard[j].pontuacao = b;
                            }
                        }
                    }
                    k++;
                    while(check!=1){    
                        printf("Fim de Jogo\n");
                        printf("1 - Ver resultados dessa rodada.\n");
                        printf("2 - Ver leaderboard\n");
                        printf("3 - Jogar novamente.\n");
                        printf("4 - Sair\n");
                        scanf("%i", &replay);
                        while(getchar()!='\n');
                        if(replay==1){
                            for(int i = 0; i<acertos; i++){
                                printf(" QUESTAO %i TEMPO DEMORADO %i RESPOSTA %s PONTUACAO %i \n", resultado[i].questao, resultado[i].tempo,resultado[i].palavra,resultado[i].nota);
                            }
                        }else if(replay == 2){
                            for(int i = 0; i<k; i++){
                                printf(" %io LUGAR :: SCORE %i \n", i+1, scoreboard[i].pontuacao);
                            }
                        }else if(replay==3){
                            printf("Boa sorte!\n");
                            t=5000;
                            check = 1;
                            score = 0;
                            acertos = 0;
                        }else if(replay==4){
                            printf("Obrigado por jogar!\n");
                            check = 1;
                            loop = 0;
                        }else{
                            printf("Entrada invalida, pressione 1, 2, 3 ou 4!\n");                           
                        }
                    }    
                }
            }break; 
        }
    }
    return 0;
}