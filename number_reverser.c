#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, ones, tens, hundreds, reversed_num;
    printf("Enter a 3-digit number here: ");
    scanf("%d", &num);
    ones=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    reversed_num=units;
    reversed_num=reversed_num*10+tens;
    reversed_num=reversed_num*10+hundreds;
    printf("The reversed number of %d is %d", reversed_num);
}
