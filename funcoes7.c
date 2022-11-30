#include<stdio.h>


int somaMaiorEMenor(){
    int a, b, c, maior, menor;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        maior = a;
        if(b < c){
            menor = b;
        } else {
            menor = c;
        }
    } else if (b > a && b > c){
        maior = b;
        if(a < c){
            menor = a;
        } else {
            menor = c;
        }
    } else if (c > a && c > b){
        maior = c;
        if(a < b){
            menor = a;
        } else {
            menor = b;
        }
    }

    return (menor + maior);
}


int main (){

    int soma;
    soma = somaMaiorEMenor();

    printf("%d\n", soma);
    return 0;

}

