#include<stdio.h>

int identificaForma(int base, int altura){

    if(base == altura){
        return 1;
    }
    return 0;
}


int main (){

    int base, altura;

    scanf("%d %d", &base, &altura);

    int resultado;
    resultado = identificaForma(base, altura);

    printf("%d\n", resultado);
    return 0;

}


