#include <stdio.h>
#include <limits.h>

int soma_direta(int n){
    return ((n * (n+1))/2);
}

int soma_vetores(int n, int v[]){ 
    int soma = 0;
    for  (int i = 0; i < n ; i++){
        soma += v[i];
    }
    return soma;
}

int discorda_da_soma(void){
    for( int n = 1; n < INT_MAX; n++){  //experimentar n ate ao maximo de inteiros
        int v[n];
        for (int i = 0; i < n; i++){    //criar um novo indice no vetor 
            v[i] = i + 1;               // v[0] = 1 ; v[1] = 2 ; ...
        }

        int soma1 = soma_direta(n);
        int soma2 = soma_vetores(n, v);

        if(soma1 != soma2){
            return n;
        }
    }
    return -1;      //nao ha divergencia
}

int main(){
    int n = discorda_da_soma();
    if(n != -1) {
        printf("%d\n", n);
    } else {
        printf("NAO DIVERGE\n");
    }
}