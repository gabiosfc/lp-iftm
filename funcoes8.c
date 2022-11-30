#include<stdio.h>


double calculaJuros(double valor, double meses, double percentualJuros){
    double juros;
    juros = valor * meses * percentualJuros;
    return juros;
}


int main (){

    double valor, percentualJuros, juros, meses;

    scanf("%lf %d %lf", &valor, &meses, &percentualJuros);

    juros = calculaJuros(valor, meses, percentualJuros);

    printf("%d\n", juros);

    return 0;

}


