#include <stdio.h>

int main() {
    char one, two, three, four, five;
    scanf("%c\n%c\n%c\n%c\n%c", &one, &two, &three, &four, &five);
    printf("%c\n%c\n%c\n%c\n%c", one+1, two, three+1, four, five+1);
    return 0;
}