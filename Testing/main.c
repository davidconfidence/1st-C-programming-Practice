#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[20];

    printf("Hello:\a\n");
    scanf("%s",    &input);

    printf("You have written %s", input);
    return 0;
}
