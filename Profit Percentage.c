#include <stdio.h>

int main() {
    int CP, SP;
    double profitPercentage;

  
    scanf("%d %d", &CP, &SP);

    
    profitPercentage = ((double)(SP - CP) / CP) * 100;

   
    printf("%.2f\n", profitPercentage);

    return 0;
}
