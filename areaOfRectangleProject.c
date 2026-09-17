#include <stdio.h>
#include <stdlib.h>
// Receives height and width
// calculate the area
// Give the answer

float areaRectangle (float num1, float num2)
{
    float area;
    area = num1 * num2;
    return area;
}

int main()
{


        float height, width;

        printf("ENTER THE HEIGHT: ");
        scanf("%f", &height);
        printf("ENTER THE WIDTH: ");
        scanf("%f", &width);

        printf("THE AREA OF THE RECTANGLE IS: %.2f", areaRectangle(height, width));



    return 0;
}
