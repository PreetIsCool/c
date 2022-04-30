#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float distance;
    printf("Enter X1: ");
    scanf("%f", &x1);
    printf("Enter Y1: ");
    scanf("%f", &y1);
    printf("Enter X2: ");
    scanf("%f", &x2);
    printf("Enter Y2: ");
    scanf("%f", &y2);
    distance=sqrt((x1-x2*x1-x2)*(y1-y2*y1-y2));
    printf("\n\n\n\n");
    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f", x1, y1, x2, y2, distance);
}
