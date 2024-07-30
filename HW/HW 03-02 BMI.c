#include <stdio.h>
 
int main() {
    float height, weight, bmi;
    scanf("%f\n%f", &height, &weight);
    height /= 100;
    bmi = weight / (height*height);
    printf("%f", bmi);
    return 0;
}