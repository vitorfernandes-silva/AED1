#include <stdio.h>

int main() {
    int n, soma = 0;

    // Solicita ao usuário o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula o somatório dos n primeiros números ímpares
    for (int i = 0; i < n; i++) {
        soma = soma + (2 * i + 1);
    }

    // Exibe o resultado
    printf("A soma dos %d primeiros numeros impares eh: %d\n", n, soma);

    return 0;
}
