#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int x, y, z;
    int numeros[argc-1];

if (argc < 3){
    printf("informe 2 ou mais argumentos argumentos inteiros.");
    return 1;
}

if (argc == 3){
int x = atoi(argv[1]);
int y = atoi(argv[2]);
printf("maior (%d, %d): %d", x, y, maior_2n(x,y));

}
else{
    x = atoi(argv[1]);
    y= atoi(argv[2]);
    z= atoi(argv[3]);
    printf("%d", maior_3n(x, y, z));
}

return 0;

}