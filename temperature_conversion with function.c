#include <stdio.h>
#include <stdlib.h>

//Receive a number
//Convert the number from feh -- cel or from cel -- feh
//Return the values

float covertedTemp(float temperature1)
{
    float cel;

    cel = (temperature1 - 32.0) * (5.0 / 9.0);

    return cel;
}


int main()
{
    float temp;
    printf("ENTER TEMPERATURE IN FAHRENHEIT: ");
    scanf("%f", &temp);
    printf("TEMPERATURE IS : %.2f CELSUIS\n", covertedTemp(temp));


    return 0;
}
