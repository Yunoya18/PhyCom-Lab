#include <stdio.h>
 
int main() {
    float cost, dis, num, total;
    scanf("%f\n%f\n%f", &cost, &dis, &num);
    total = (cost * ((100 - dis) / 100)) * num;
    printf("%.2f", total);
}