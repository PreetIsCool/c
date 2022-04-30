#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data;
    printf("Please enter a floating/decimal integer: ");
    scanf("%f", &data);
    printf("The integer will be %d\n", (int)data);
    printf("The decimal part will be %f", data-(int)data);
}
