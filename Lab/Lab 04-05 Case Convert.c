#include <stdio.h>
 
int main() {
    char letter;
    scanf("%c", &letter);
    if (('a' <= letter) && (letter <= 'z')) {
        letter = letter - 32;
        printf("%c", letter);
    } else if (('A' <= letter) && (letter <= 'Z')) {
        letter = letter + 32;
        printf("%c", letter);
    } else {
        printf("error");
    }
    return 0;
}