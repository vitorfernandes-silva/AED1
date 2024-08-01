// Solução recursiva para fatorial

#include <stdio.h>

int fatorialR(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorialR(n - 1);
}

int main(){
    int numero = 4;
    printf("O fatorial de %d eh %d\n", numero, fatorialR(numero));

}