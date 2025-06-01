#include <stdio.h>
//n, quantidade de valores, i - indice atual)
int soma_vetores(int n, int v[]){ //funçao somar cada valor
    int soma = 0;
    for  (int i = 0; i < n ; i++){
        soma += v[i];
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

    int resultado = soma_vetores(n, v);
    printf("%d\n", resultado);

    return 0;
}