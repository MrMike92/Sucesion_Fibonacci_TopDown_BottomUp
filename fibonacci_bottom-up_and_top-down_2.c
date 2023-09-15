#include <stdio.h>
#define MAX 100

int memo[MAX];

// Función recursiva para Fibonacci top-down
int fib_top_down(int n){
    if (memo[n]!=-1){
        return memo[n];
    }
    if(n<=1){
        memo[n]=n;
    }else{
        memo[n]=fib_top_down(n-1)+fib_top_down(n-2);
    }
    return memo[n];
}

// Función para Fibonacci bottom-up
int fib_bottom_up(int n){
    int memo[n+1];
    memo[0]=0;
    memo[1]=1;
    for (int i=2;i<=n;i++){
        memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}

// Función principal
int main(){
    int n;
    printf("Ingrese el valor de n >> ");
    scanf("%d", &n);
    for(int i=0;i<MAX;i++){
        memo[i]=-1;
    }
    printf("La sucesion de Fibonacci con top down de %d es: ", n);
    for (int i=0;i<=n;i++){
        printf("%d ", fib_top_down(i));
    }
	printf("\n\nLa sucesion de Fibonacci con bottom up de %d es: ", n);
    for(int i=0;i<=n;i++){
        printf("%d ", fib_bottom_up(i));
    }
    return 0;
}

