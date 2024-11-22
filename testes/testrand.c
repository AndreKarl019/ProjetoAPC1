#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX = 20;

int main(){
    srand(time(NULL));
    int b;
    int a = rand();
    b = a%20;
    printf("%i",b);
}