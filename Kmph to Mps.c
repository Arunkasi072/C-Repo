#include <stdio.h>

int main() {
    int speedKmPerHour;
    double speedMeterPerSecond;

    
    scanf("%d", &speedKmPerHour);

    
    speedMeterPerSecond = speedKmPerHour * (1000.0 / 3600.0);

    
    printf("%.2f\n", speedMeterPerSecond);

    return 0;
}