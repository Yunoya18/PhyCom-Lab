#include <stdio.h>

int main() {
    char num[5];
    scanf("%s", num);
    printf("%-81.1s%-81.2s%-81.3s%-81.4s%-81.5s", num, num, num, num, num);
}