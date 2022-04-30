#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distance, speed, time;
    printf("Please enter the distance to the destination: ");
    scanf("%f", &distance);
    printf("Please enter your speed (KM/H): ");
    scanf("%f", &speed);
    time=distance/speed;
    printf("\n\n");
    printf("You will reach your destination in %.2f hours", time);
}
