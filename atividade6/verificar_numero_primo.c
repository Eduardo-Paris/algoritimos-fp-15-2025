#include <stdio.h>
#include <stdbool.h>
#include <locale.h>



bool verificar_numero_primo(int numero) {
    if (numero <= 1)
        return false;
    if (numero == 2)
        return true;
    if (numero % 2 == 0)
        return false;



    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int main() {
setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (verificar_numero_primo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
    
    
        printf("%d nao eh um numero primo.\n", numero);

        
    }



    return 0;
}