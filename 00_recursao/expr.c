// Solução recursiva para exponencial

#include <stdio.h>

int expr(int base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * expr(base, expoente - 1);
}

int main(){
    printf("%d\n", expr(2,3));

    return 0;
}