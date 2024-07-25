// Solução iterativa para Fatorial

#include <stdio.h>
int fatorialI(int n){
    int fat = 1;
    for(int i = 1; i < n + 1; i++)
        fat = fat * i;
    return fat;
}

int main(){
    int numero = 4;
    printf("O fatorial de %d eh %d\n", numero, fatorialI(numero));


    return 0;
}