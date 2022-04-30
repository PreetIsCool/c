#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds, hours, minutes, remaining_seconds;
    printf("Please enter seconds: ");
    scanf("%d", &seconds);
    hours=seconds/3600;
    printf("Hours: %d\n", hours);
    minutes=(seconds-hours*3600)/60;
    printf("Minutes: %d\n", minutes);
    remaining_seconds=(minutes*3600)%60;
    printf("Seconds: %d\n", remaining_seconds);
    printf("\n\n\n\n");
    printf("%d = %d hours : %d minutes : %d seconds", seconds, hours, minutes, remaining_seconds);
}
