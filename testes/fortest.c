#include <stdio.h>

int main(){
    int resposta;
    for(int i=0;i<1;i--){
        printf("Escolha um numero entre 1 e 5: ");
        scanf("%i",&resposta);
        if(resposta>=1&&resposta<=5){
            i=3;
            printf("voce escolheu o numero %i", resposta);
        }
    }

    return 0;
}