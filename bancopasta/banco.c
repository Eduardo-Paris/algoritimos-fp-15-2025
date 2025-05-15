#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    // enquanto continuar_execucao for igual a 'r' o loop será executado
    char continuar_execucao = 'r';

    // inicializa a variavel que possui o valor da conta do banco
    float saldo = 0.0;

    // pergunta para o usuario o saldo e garda ele na variavel saldo
    // executado fora do loop pois a unica forma de muda-lo eh fazendo tranferencias, retirando ou adicionando dinheiro dentro do loop
    printf("Digite o saldo da sua conta: ");
    scanf("%f", &saldo);

    // checa se o saldo eh um valor positivo
    if (saldo < 0) {
        // se nao for retorna uma mensagem para o usuario e o muda para 0
        printf("Valor invalido\nSaldo sera inicializado como 0.0");
        saldo = 0.0;
    }

    while(continuar_execucao == 'r') {
        // cria a variavel que guardara a acao escolhida pelo usuario
        char acao;

        // mostra as opcoes de acoes ao usuario e pergunta qual ele quer
        printf("Escolha a acao que deseja executar\ns - Sacar\nd- Depositar\nt - Transferir\n");
        getchar();
        scanf("%c", &acao);

        if(acao == 's') {
            // cria a variavel que guardara o valor a ser sacado
            float valor_a_sacar;

            // pergunta quanto o usuario quer sacar
            printf("Digite a quantia que deseja sacar: ");

            getchar();
            scanf("%f", &valor_a_sacar);

            // checa se o usuario quer sacar um valor que nao eh acima do que possui
            if (saldo >= valor_a_sacar) {
                // se o usuario possui dinheiro o bastante printa que sacou o dinheiro e modifica o saldo
                printf("Sucesso.\nVoce sacou %.2f reais\n", valor_a_sacar);
                saldo = saldo - valor_a_sacar;
                
                // pergunta ao usuario se deseja realizar outra operacao
                printf("Deseja realizar outra operacao\nr - sim\nn - nao\n");
                getchar();
                scanf("%c", &continuar_execucao);
            } else {
                // caso o saldo seja insuficiente para a execucao do programa 

                printf("Saldo insuficiente para realizar a operacao para sua seguranca a execucao terminara\n");
                continuar_execucao = 'n';
            }

        } else if (acao == 'd') {
            // armazena o valor a ser depositado
            float valor_a_depositar;

            printf("Digite a quantia que deseja depositar: ");

            getchar();
            scanf("%f", &valor_a_depositar);

            // checa se o valor a depositar eh valido
            if (valor_a_depositar < 0) {
                // se nao retorna uma mensagem de erro e para a execucao
                printf("Valor invalido de deposito para sua seguranca a execucao terminara\n");
                continuar_execucao = 'n';
            } else {
                // se o valor for valido o soma ao saldo
                saldo = saldo + valor_a_depositar;

                // printa uma mensagem de sucesso e retorna o novo saldo
                printf("Sucesso.\nO novo saldo eh de %.2f reais\n", saldo);

                // pergunta ao usuario se deseja realizar outra operacao
                printf("Deseja realizar outra operacao\nr - sim\nn - nao\n");
                getchar();
                scanf("%c", &continuar_execucao);
            }

        } else if (acao == 't') {
            // cria uma variavel para o valor a tranferir e uma string para o nome do recebedor
            float valor_a_transferir;
            char nome[30];

            printf("Digite a quantia que deseja tranferir: ");

            getchar();
            scanf("%f", &valor_a_transferir);

            // checa se o saldo eh suficiente para fazer a tranferencia
            if (saldo >= valor_a_transferir) {
                // se for pergunta o nome do recipiente
                printf("Digite o nome do recipiente: ");
                getchar();
                fgets(nome, 30, stdin);

                saldo = saldo - valor_a_transferir;

                // printa uma mensagem de sucesso e com o valor tranferido e o novo saldo
                printf("Sucesso.\n%.2f reais tranferidos para %sO novo saldo eh de %.2f reais\n", valor_a_transferir, nome, saldo);

                // pergunta ao usuario se deseja realizar outra operacao
                printf("Deseja realizar outra operacao\nr - sim\nn - nao\n");
                getchar();
                scanf("%c", &continuar_execucao);


            } else {
                // caso o saldo seja insuficiente para a execucao do programa 

                printf("Saldo insuficiente para realizar a operacao para sua seguranca a execucao terminara\n");
                continuar_execucao = 'n';
            }

        } else {
            printf("Acao invalida para sua seguranca a execucao terminara\n");
            continuar_execucao = 'n';
        }
    }
}

