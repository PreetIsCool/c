#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X;
    printf("Please enter any integer: ");
    scanf("%d", &X);
    X=pow(X , 2);
    printf("X raise to the power of 2 is %d\n", X);
    X=pow(X , 2);
    printf("X raise to the power of 4 is %d\n", X);
    X=pow(X , 2);
    printf("X raise to the power of 6 is %d\n", X);
    X=pow(X , 2);
    printf("X raise to the power of 8 is %d\n", X);
}
