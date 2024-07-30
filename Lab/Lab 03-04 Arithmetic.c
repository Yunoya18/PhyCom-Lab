#include <stdio.h>
 
int main() {
    double num_1, num_2;
    scanf("%lf,%lf", &num_1, &num_2);
    printf("The sum of the given numbers : %lf\n", num_1 + num_2);
    printf("The difference of the given numbers : %lf\n", num_1 - num_2);
    printf("The product of the given numbers : %lf\n", num_1 * num_2);
    printf("The quotient of the given numbers : %lf", num_1 / num_2);
    return 0;
}