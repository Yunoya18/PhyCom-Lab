#include <stdio.h>
 
int main() {
    float num1, num2, num3, total;
    scanf("%f %f %f", &num1, &num2, &num3);
    if (((num1 < num2) && (num2 < num3)) || ((num1 > num2) && (num2 > num3))) {
        total = num2;
    } else if (((num2 < num1) && (num1 < num3)) || ((num3 < num1) && (num1 < num2))) {
        total = num1;
    } else {
        total = num3;
    }
    printf("%.2f", total);
    return 0;
}