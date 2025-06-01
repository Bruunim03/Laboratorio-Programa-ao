#include <stdio.h>

long long soma_vetores_long(int v[], int n){
    long long soma = 0;
    for (int i = 0; i < n; i++){
        soma += (long long)v[i];
    }
    return soma;
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    long long resultado = soma_vetores_long(v,n);
    printf("%lld\n", resultado);

    return 0;
}
