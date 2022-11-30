#include<stdio.h>

int identificaForma(){
    int base, altura;

    scanf("%d %d", &base, &altura);

    if(base == altura){
        return 1;
    }else {
        return 0;
    }

}


int main (){

    int resultado;
    resultado = identificaForma();

    printf("%d\n", resultado);
    return 0;

}


