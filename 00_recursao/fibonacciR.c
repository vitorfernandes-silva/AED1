// Solução recursiva que têm por objetivo somar elementos de uma lista

#include <stdio.h>

int fibo(int n){
    if((n == 0) || (n == 1))
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main(){
    printf("%d\n", fibo(5));

    return 0;
}