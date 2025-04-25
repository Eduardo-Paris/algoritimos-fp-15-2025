#include <stdio.h>

int main(int argc, char* argv[]){




printf("%s\n", palavra1);
printf("%s\n", palavra2);

printf("palavra2[4] = 5c\n", palavra2[4]);

//leitura segura de strings

printf("DIGITE UMA FRASE:")
fgets(frase1, TAM, stdin);

printf("%s\n", frase1);

printf("DIGITE UMA PALAVRA:");
fflush(stdin);
fgets(palavra3, TAM, stdin);

printf("DIGITE OUTRA PALAVRA:");
fflush(stdin);
fgets(palavra4, TAM, stdin);

if(strcmp(palavra3, palavra4) == 0){
printf("as palavras sao iguais\n");
}

else{
printf("as palavras NAO sao iguais!\n");
}
printf("tamanho da palavra3 eh: %d", strlen(palavra3));

return 0;

}