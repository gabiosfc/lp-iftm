#include <stdio.h>

void divisoresDeN(int n){

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
}

int main () {

    int n;

    scanf("%d", &n);

    divisoresDeN(n);

    return 0;
}
