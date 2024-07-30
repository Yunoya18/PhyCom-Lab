#include <stdio.h>
 
int main() {
    int num1, num2, total;
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
        total = num1 + num2;
        printf("%d + %d = %d", num1, num2, total);
    } else {
        total = num1 - num2;
        printf("%d - %d = %d", num1, num2, total);
    }
    return 0;
}