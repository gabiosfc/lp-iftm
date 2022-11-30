#include<stdio.h>


double maiorNumero(double x, double y){
    double maior;

    if(x > y){
        maior = x;
    } else {
        maior = y;
    }

    return maior;
}


int main (){

    double x, y, maior;

    scanf("%lf %lf", &x, &y);

    maior = maiorNumero(x, y);

    printf("%lf\n", maior);

    return 0;

}
