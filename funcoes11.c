#include <stdio.h>

void divisoresDeN(){
    int n, cont;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        cont = i + 1;
        if (n % cont == 0){
            printf("%d\n", cont);
        }
    }
}

int main () {

    divisoresDeN();

    return 0;
}
