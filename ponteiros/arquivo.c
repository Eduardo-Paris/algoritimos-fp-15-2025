#include <stdio.h>

/*
MODOS DE ABERTURA DE ARQUIVO

'r' para a letura
'w' para criar e escrever no arquivo
'a' para criar, se não existir , e adicionar ao final do arquivo
*/

int main (int argc, char* argv []){

    FILE *arq = fopen("arq.txt", 'w');

    if(arq == NULL){
    printf("erro ao abrir arquivo.");
    return 1;

    }
   
    fprintf (arq,"hello world");
     
    fclose(arq);

    return 0;

}