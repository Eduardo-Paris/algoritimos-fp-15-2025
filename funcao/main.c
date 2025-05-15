#include <stdio.h>
int ler_valor_valido(int opcao1, int opcao2, char* tgexto_opcao1, char* texto_opcao2){

int opcao_valida;

do{


}

while(opcao_valida != opcao1 && opcao_valida != opcao2);

return opcao_valida
}






int main(int c, char* argv[]){

int opcao, resposta;

opcao= ler_valor_valido(1, 0, "iniciar quiz", "Sair");

if(opcao == 1){
    resposta = ler_valor_valido(1,2, "Rio de janeiro", "Brasilia");
printf("Escolha uma opcao:|n1 - iniciar quiz\n0 - Sair\n");
scanf("%d", &opcao);

if(resposta == 2){

printf("voce acertou!\n");
}
else{
    printf("pode melhorar!\n")
}
}
while(opcao != 1 && opcao != 0 );

if(opcao == 1){
do{
printf("Qual a capital do Brasil\n1 - Rio de Janeiro\n2 - Brasilia \n");
scanf("%d", &resposta);
}
while(resposta != 1 && resposta != 2);

if(opcao == 1){
do{
    printf("Qual a capital do Brasil\n1 - Rio de Janeiro\n2 - Brasilia \n");
    scanf("%d", &resposta);

}
while (resposta != 1 && resposta != 2);

if(resposta !== 2){
    printf("voce acertou !\n");
}
}
}

return 0;

}
 