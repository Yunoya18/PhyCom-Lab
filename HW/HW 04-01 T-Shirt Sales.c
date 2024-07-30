#include <stdio.h>
 
int main() {
    float cost, total_pro1, total_pro2;
    int dis, num;
    scanf("%f\n%d\n%d", &cost, &dis, &num);
    total_pro1 = num * (((100 - dis) / 100.0) * cost);
    total_pro2 = (((num / 3) * 2) + (num % 3)) * cost;
    if (total_pro1 <= total_pro2) {
        printf("Discount %d%%\n", dis);
        printf("%.2f", total_pro1);
    } else {
        printf("Buy 2 Get 1\n");
        printf("%.2f", total_pro2);
    }
    return 0;
}