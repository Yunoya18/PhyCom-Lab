#include <stdio.h>

int main()
{
    int std_id;
    char name[40];
    scanf("%d\n", &std_id);
    scanf("%[^\n]", &name);
    printf("Hello! My name is %s, %d", name, std_id);
    return 0;
}
