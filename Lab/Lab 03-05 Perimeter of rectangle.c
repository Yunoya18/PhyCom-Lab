#include <stdio.h>
 
int main() {
    double side_1, side_2, perimeter;
    scanf("%lf\n%lf", &side_1, &side_2);
    perimeter = (side_1 + side_2) * 2;
    printf("Perimeter of rectangle = %.4lf units", perimeter);
    return 0;
}