#include <stdio.h>


int main() {
    int N, M, X;
    int perimeter;
    int cost;

    // Read input values
    scanf("%d %d %d", &N, &M, &X);

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (N + M);

    // Calculate the cost of the wireframe
    cost = perimeter * X;

    // Print the cost
    printf("%d\n", cost);

    return 0;
}
