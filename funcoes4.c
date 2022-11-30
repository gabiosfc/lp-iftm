#include<stdio.h>


int identificaPares(){
    int cont = 0;
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

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

    int quantidadePares;
    quantidadePares = identificaPares();

    printf("%d\n", quantidadePares);
    return 0;

}

