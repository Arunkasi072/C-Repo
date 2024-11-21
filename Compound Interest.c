#include <stdio.h>
#include <math.h>

int main() 
{
    int P, R, T;
    double CI;
    scanf("%d %d %d", &P, &R, &T);
    CI = P * pow((1 + R / 100.0), T) - P;
    printf("%.2f\n", CI);

    return 0;
}