#include <stdio.h>
#include <stdlib.h>

// Función recursiva para Fibonacci top-down
int fibonacci_top_down(int n, int *memo) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibonacci_top_down(n-1, memo) + fibonacci_top_down(n-2, memo);
    return memo[n];
}

// Función para Fibonacci bottom-up
int fibonacci_bottom_up(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int memo[n+1];
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

// Función principal
int main() {
    int n = 46;
    int memo[n+1];
    // Inicializamos el array con -1
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }
    printf("Fibonacci top-down: %d\n", fibonacci_top_down(n, memo));
    printf("Fibonacci bottom-up: %d\n", fibonacci_bottom_up(n));
    return 0;
}

