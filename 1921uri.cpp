#include <stdio.h>

int main() {
    long long n, barbantes;

    scanf("%lld", &n);

    barbantes = (n * (n - 3)) / 2;

    printf("%lld\n", barbantes);

    return 0;
}