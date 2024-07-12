#include <stdio.h>
 
int main() {
    int num, two, three;
    scanf("%d", &num);
    three = num % 1000;
    two = num / 1000;
    printf("%d%d", three, two);
    return 0;
}