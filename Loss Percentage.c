#include <stdio.h>

int main() 
{
    int CP, SP;
    double lossPercentage;

    
    scanf("%d %d", &CP, &SP);

    lossPercentage = ((double)(CP - SP) / CP) * 100;

 
    printf("%.2f\n", lossPercentage);

    return 0;
}