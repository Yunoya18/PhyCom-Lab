#include <stdio.h>
 
int main() {
    char text1[30], text2[30], text3[30], text4[30];
    scanf("%s\n%s\n%s\n%s", text1, text2, text3, text4);
    printf("String 1: %.3s\n", text1);
    printf("String 2: %.4s\n", text2);
    printf("String 3: %.5s\n", text3);
    printf("String 4: %.6s", text4);
    return 0;
}