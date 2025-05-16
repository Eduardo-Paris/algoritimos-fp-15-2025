#include <stdio.h>

int main(int arg, char* argv[]) {
    char opcao;
    char voltar;

    do {
        printf("----------------------------------------------------------------------------\n");
        printf(" VISUAL NOVEL : UM ENCONTRO COM BIG FAUSTO\n");
        printf(" - aperte X pra reiniciar a historia -\n");
        printf("-----------------------------------------------------------------------------\n");

        printf("Voce acorda em um belo dia ensolarado de Domingo no Rio de Janeiro.\n");
        printf("Seu telefone toca...\n");
         printf("ring ring...\n");
          printf("Voce pensa 'Porra deve ser a merda da Claro me ligando outra vez!'\n");
         
           printf("...\n");
        printf("Na verdade era uma chamada do unico, o inigualavel... Big Fausto!\n\n");
       
         printf("Fausto: Alo meu, sou eu o Fausto, eu tava querendo sair...\n");
       printf("...\n");
        printf("Como voce gostaria que esse encontro iniciasse?\n");
        printf("R - Restaurante na orla de Copacabana\n");
        printf("P - Passeio no Cristo Redentor\n");
        scanf(" %c", &opcao);

        if(opcao == 'R' || opcao == 'r') {
            printf("\nVoce escolheu um restaurante chique na orla. Big Fausto aparece de blazer rosa.\n");
            printf("Fausto: \"Oloco, bicho! Vista linda dessa cidade maravilhosa, hein! Bora comer uns frutos do mar!\"\n\n");

            printf("Como voce reage?\n");
            printf("S - Sorri e pede camaroes\n");
            printf("N - Nega e diz que prefere pastel com caldo de cana\n");
            scanf(" %c", &opcao);

            if(opcao == 'S' || opcao == 's') {
                printf("\nFausto: \"Camarao na manteiga, bicho! Agora voce ganhou meu coracao!\"\n");
                printf("\nFausto: Venha eu sei de um bom restaurante\"\n");
                printf("Voces entram no restaurante\"\n");
                printf("\nFausto:Eu vou querer o melhor prato que voces tem meu!\"\n");
                printf("Atendente: Pode deixar");
                printf("A comida esta otima, voces aproveitaram bastante\"\n");
                printf("...\n");
                printf("DEU TUDO CERTO\n");
                 printf;("Final desbloqueado: 'FINAL FELIZ' -O domingao do Faustao-\n");

            } else if(opcao == 'N' || opcao == 'n') {
                printf("\nFausto: \"HAHAHA! Essa e boa! Tambem curto um pastel na feira, viu!\"\n");
                 // Novo final alternativo — VIAGEM INTERNACIONAL
             printf("\nNarrador: Fausto segura sua mao e diz:\n");
        printf("Fausto: \"Bicho... E se a gente largasse tudo e fosse viajar pelo mundo, que tal um lugar exotico, UM PAIS DA EUROPAA, ou a Coreia do Norte hein?\"\n");
 printf(" ...\n");
        printf(" Fausto: Para onde quer ir?\n");
        printf("E - Um pais da Europa\n");
        printf("C - Coreia do Norte\n");
         printf(" ...\n");
        scanf(" %c", &opcao);

        if(opcao == 'E' || opcao == 'e') {
            printf("\nNarrador: Voces embarcam para a Europa, animados para conhecer as recem inauguradas Torres Gemeas da Europa.\n");
            printf("... Mas no meio do voo, algo terrível acontece...\n");
            printf("Terrorista: \"Este voo agora pertence a resistencia livre!\"\n");
            printf("Fausto: \"MAS QUE DIABOS, BICHO?!\"\n");
            printf("O aeroplano foi redirecionado para as Torres gemeas da Europa, na cidade de Velha York na Europa.\n");
            printf("...\n");
            printf("Seu aviao atinge as torres da Europa\n");
            printf("CABUM\n");
            printf("Todo mundo morreu \n");
            printf("SE FODEU\n");
            printf("Final desbloqueado: 'AMOR NAS ALTURAS' -Tragedia no Ar-\n");

        } else if(opcao == 'C' || opcao == 'c') {
            printf("Voces chegam a Coreia do Norte. Tudo esta cinza e silencioso, mas voces ficam animados mesmo assim.\n");
           
            printf("Fausto: \"Parece meio feio, mas olha... Tem umas montanhas bonitas, hein!\"\n");
           
            printf("Vocês visitam Pyongyang, tiram selfies discretas, participam de tours vigiados.\n");
           
            printf("Fausto sai a noite com voce pra fazer uma caminhada escondido perto de uma construção abandonada...\n");
            printf("A cidade esta deserta de noite...\n");
            printf("Fausto: \"Opa, bicho... que portinha é essa aqui escondida na parede?\"\n");
            printf("...\n");
            printf("Voces entram. Dentro existe um bunker secreto com um botão vermelho enorme no centro.\n");
            printf("Fausto: \"Se esse botao fosse perigoso mesmo, não ia estar tao facil de apertar, certo?\"\n");
            printf("Ele aperta.\n");
            printf("Fausto: Haha deu em nada viu? Vamo continuar o passeio por Pyongyang.\n");
            printf("Voces saem.\n");
            printf("...\n");
            printf("De repente, buracos se abrem no chao e misseis nucleares emergem.\n");
            printf("Fausto: \"TA PEGANDO FOGO, BICHO!! EU APENAS APERTEI UM BOTAO!\"\n");
            printf("...\n");
            printf("Os misseis decolam apos o botao ser apertado por Big Fausto atingiram a America. Os misseis em pouco tempo atingirao as cidades Ocidentais. Os EUA retaliarao assim que detectarem os misseis, respondendo imediatamente.\n");
            printf("...\n");
            printf("Narrador: Em minutos, o mundo inteiro está em guerra.\n");
            printf("Narrador: Voces morrem juntos, cobertos pela luz branca de uma bomba atomica.\n");
            printf("...\n");
            printf("SE FODEU\n");
            printf;("Final desbloqueado: 'APOCALIPSE FAUSTONICO' -O botao vermelho-\n");
        
        }
               
               
            }

        } else if(opcao == 'P' || opcao == 'p') {
            printf("\n Os dois sobem juntos ao Cristo Redentor.... O ceu esta limpo, o vento suave.\n");
            printf("Fausto: \"Eh cada visual que parece de novela, bicho! So faltava uma trilha sonora do Roupa Nova.\"\n");

            printf("O que voce prefere fazer?\n");
            printf("F - Tirar uma selfie com ele\n");
            printf("M - Contemplar o por do sol de maos dadas\n");
            scanf(" %c", &opcao);

            if(opcao == 'F' || opcao == 'f') {
                 printf("click!\"\n");
                printf("\n Os dois tiram uma selfie perfeita, viraliza com a legenda: #FaustoShip\n");
             printf("...!\"\n");
               
            } else if(opcao == 'M' || opcao == 'm') {
            printf("\n Os dois sobem juntos ao Cristo Redentor. O ceu esta limpo, o vento suave.\n");
            printf("Fausto: \"Eh cada visual que parece de novela, bicho! So faltava uma trilha sonora do Roupa Nova.\"\n");
 printf(" ...\n");
            printf("O que voces deviam fazer agora?\n");
            printf("F - Tirar uma selfie com ele\n");
            printf("M - Continuar contemplando o por do sol de maos dadas\n");
            scanf(" %c", &opcao);

            if(opcao == 'F' || opcao == 'f') {
                 printf("Os dois irao tirar uma selfie\"\n");
                 printf("Fausto: \"No tres! UM! DOIS! TRES!\"\n");
                  printf("click!\"\n");
                printf("\n Voces tiram uma selfie perfeita, viraliza com a legenda: #FaustoShip\n");
            } else if(opcao == 'M' || opcao == 'm') {
                printf("\n Voce segura a mao de Fausto.\n");
                printf("Fausto: \"O relogio ta girando, mas aqui o tempo parou pra mim, hein meu!\"\n");
                 printf("...\"\n");
                  printf("Fausto: \"Bora tirar uma foto desse momento meu!\"\n");
                   printf("click!\"\n");
                    printf("...\"\n");
            }
        }

        // Reviravolta dramática
        printf("\n Mas de repente… algo estranho acontece…\n");
        printf(" ...\n");
        printf(" Uma nevoa densa desce sobre o Rio. O ceu escurece. Passaros fogem em silencio.\n");
         printf(" ...\n");
        printf(" Do nada surgem os Traficantes.\n");
        printf("Traficantes: \"Noixs veio por voceixs no micro-ondas por ficar fazendo sinalzinho de gangue na foto, seus sangue ruim.\"\n");
         printf(" ...\n");

        printf("Fausto: \"Agora deu o caralho mesmo, bicho!\"\n");
 printf(" ...\n");
        printf("Traficantes: \"Riu da minha cara, achou que não ia dar nada? Vou te apresentar um Kit Salve da Quebrada.\n");
        
        printf("Te avisei, te alertei, tu nao quis me escutar");

        printf("Fim da linha. Todos morrem. O amor ficou eternizado nos ceus do Rio.\n");
        printf("...\n");
        printf("SE FODEU\n");
         printf("Final desbloqueado: 'VIROU ESTAMPA DE CAMISA' - Nunca tire foto com sinais -\n");
       
        } else {
            goto final_fausto_mata;
        }

        printf("\nDeseja voltar ao inicio? Aperte X: ");
        scanf(" %c", &voltar);

    } while (voltar == 'X' || voltar == 'x');

    printf("-ERRO FECHE O PROGRAMA-\n");


final_fausto_mata:
    printf("\nVOCE ERROU A RESPOSTA!\n");
    printf("SEU AVATAR XINGOU O BIG FAUSTO!\n");
    printf("BIG FAUSTO FICOU PUTO E TE MATOU NA HORA!\n");
    printf("SE FODEU\n");
    printf("Final desbloqueado: 'A BRIGA COM BIG FAUSTO' - Nunca irrite o Fausto -\n");
    return 0;
}