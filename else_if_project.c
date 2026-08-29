#include <stdio.h>
#include <stdlib.h>

int main()

{
    int score;

    printf("Enter Your Score:");
    scanf("%d", &score);

    if(score >= 70 && score <=100)
    {
        printf("A\n");
    }


    else if(score >= 60 && score <=69)
    {
         printf("B\n");
    }

    else if(score >= 50 && score <=59)
    {
        printf("C\n");
    }


    else if(score <=49 && score >=0)
    {
         printf("F\n");
    }

    else
        printf("INVALID!!!");

    return 0;
}
