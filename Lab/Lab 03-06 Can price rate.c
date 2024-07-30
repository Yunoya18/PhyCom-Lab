#include <stdio.h>
#include <math.h>
 
int main() {
    double cost, diameter, height;
    double pi = 3.14159265359;
    double volume, ratio;
    scanf("%lf\n%lf\n%lf", &cost, &diameter, &height);
    volume = height * pi * pow((diameter / 2), 2);
    ratio = cost / volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", ratio);
    return 0;
}