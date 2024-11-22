#include <stdio.h>
#include <string.h>

int main(){
    char opc1[1], opc2, opc3, opc4, opc5;
    int deu_certo = 0;
    while(deu_certo != 1) {
        printf("historinha historinha mimi\n");
        printf("escolha a\n");
        printf("escolha b\n");
        scanf("%c", &opc1);
        if(strcmp(opc1,"a")==0){
            printf("funfou meu bom\n");
            deu_certo  = 1;
            x++;
            y--;
        }else{
            printf("escolha invalda\n");
            x--;
        }
    }
    deu_certo = 0;
    printf("%s",opc1);
    while(deu_certo!=1){
        printf("valor check\n");
        printf("%s",opc1);
        if(opc1 == opc1){
            printf("valor eh %s", opc1);
        }
        printf("valor eh %s", opc1);
    }
printf("%s", opc1);
if(x>=3 && y>=3){

} fclose fopen

    return 0;
}