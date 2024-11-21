#include <stdio.h>

int main() {
    int A, B;
    double combinedRate, timeToFill;

    // Read input values
    scanf("%d %d", &A, &B);

    
    combinedRate = (1.0 / A) + (1.0 / B);

    
    timeToFill = 1.0 / combinedRate;

    
    printf("%d\n", (int)(timeToFill + 0.5));

    return 0;
}