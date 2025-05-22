#include <stdio.h>
#include <stdbool.h>




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
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (verificar_numero_primo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
    
    
        printf("%d não é um número primo.\n", numero);

        
    }



    return 0;
}