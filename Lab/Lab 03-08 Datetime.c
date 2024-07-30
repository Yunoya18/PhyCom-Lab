#include <stdio.h>
 
int main() {
    int num;
    int day, hour, minute, sec;
    scanf("%d", &num);
    sec = num % 60;
    minute = num / 60 % 60;
    hour = num / 3600 % 24;
    day = num / 86400;
    printf("%d s = %d d %d h %d m %d s", num, day, hour, minute, sec);
    return 0;
}