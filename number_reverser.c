#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, ones, tens, hundreds;
    printf("Enter a 3-digit number here: ");
    scanf("%d", &num);
    ones=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    printf("The total sum of digits in %d is %d\n", num, ones+tens+hundreds);
}
