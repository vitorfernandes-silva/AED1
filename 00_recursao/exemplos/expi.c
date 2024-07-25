// Solução iterativa para Exponencial

#include <stdio.h>

int expi(int base, int expoente){
    int potencia = 1;
    for(int i = 0; i < expoente; i++)
        potencia = potencia * base;
    return potencia;
}

int main(){
    printf("%d\n", expi(2,3));

    return 0;
}