#include <stdio.h>

double somaTermos(double primeiroTermo, double ultimoTermo, int n){
    double somaPA;

    somaPA = (n * (primeiroTermo + ultimoTermo))/2;

    return somaPA;
}

int main() {

    double primeiroTermo, ultimoTermo, soma;
    int n;

    scanf("%lf %lf %d", &primeiroTermo, &ultimoTermo, &n);

    soma = somaTermos(primeiroTermo, ultimoTermo, n);

    printf("%lf\n", soma);

    return 0;
}
