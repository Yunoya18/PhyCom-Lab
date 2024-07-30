#include <stdio.h>
#include <math.h>
 
int main() {
    double side_1, side_2, side_3;
    scanf("%lf\n%lf", &side_1, &side_2);
    side_3 = sqrt(pow(side_1, 2) + pow(side_2, 2));
    printf("%.2lf", side_3);
    return 0;
}