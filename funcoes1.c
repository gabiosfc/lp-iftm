#include<stdio.h>


double calculaDelta(double a,double b,double c){
    double delta;

    delta = (b * b) - (4 * a * c);

    return delta;
}


int main (){

    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = calculaDelta(a, b, c);

    printf("%lf\n", delta);

    return 0;

}
