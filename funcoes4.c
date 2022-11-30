#include<stdio.h>


int identificaPares(int a, int b, int c){
    int cont = 0;


    if(a % 2 == 0){
        cont++;
    }
    if(b % 2 == 0){
        cont++;
    }
    if(c % 2 == 0){
        cont++;
    }

    return cont;
}


int main (){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int quantidadePares;

    quantidadePares = identificaPares(a, b, c);

    printf("%d\n", quantidadePares);
    return 0;

}

