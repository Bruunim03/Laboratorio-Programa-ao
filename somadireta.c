#include <stdio.h>

int soma_direta(int n){
    return ((n * (n+1))/2);
}

int main(){
    int n;
    scanf("%d", &n);

    int resultado = soma_direta (n);
    printf("%d", resultado);
    return 0;
}