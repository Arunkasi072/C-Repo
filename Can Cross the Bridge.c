#include <stdio.h>

int main() {
    int X, Y, Z;
    int maxMangoes;

    // Read input values
    scanf("%d %d %d", &X, &Y, &Z);

    // Calculate the maximum number of mangoes
    maxMangoes = (Z - Y) / X;

    // Print the result
    printf("%d\n", maxMangoes);

    return 0;
}