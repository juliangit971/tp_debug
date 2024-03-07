#include <stdio.h>

unsigned long long fibonacci(unsigned long long n) {
    if (n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    unsigned long long n = 10; // Valeur de n choisie arbitrairement

    printf("Calcul du nombre de Fibonacci pour n = %llu\n", n);
    printf("Le résultat est : %llu\n", fibonacci(n));

    return 0;
}
