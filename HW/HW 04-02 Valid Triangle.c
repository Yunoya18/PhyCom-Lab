#include <stdio.h>
 
int main() {
    int side_1, side_2, side_3;
    scanf("%d\n%d\n%d", &side_1, &side_2, &side_3);
    if ((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_2 + side_3 > side_1)) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }
    return 0;
}