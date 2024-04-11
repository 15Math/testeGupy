#include <stdio.h>

int eFibonacci(int num) {
    int fibo = 0;
    int fiboProx = 1;
    int aux;

    while (fibo <= num) {
        if (fibo == num) {
            return 1;
        }
        aux = fibo;
        fibo = fiboProx;
        fiboProx += aux;
    }
    return 0;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (eFibonacci(num)) {
        printf("O número pertence à sequência de Fibonacci.\n");
    } else {
        printf("O número não pertence à sequência de Fibonacci.\n");
    }
    return 0;
}
