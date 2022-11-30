#include<stdio.h>


void imprimirValores(int n){

    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}


int main (){

    int n;

    scanf("%d", &n);

    imprimirValores(n);

    return 0;

}
