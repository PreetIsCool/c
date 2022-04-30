#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A1, An, n, Sn;
    printf("Please enter the intial term: \n");
    scanf("%d", &A1);
    printf("Please enter the n-th element: \n");
    scanf("%d", &An);
    printf("Please enter the total term: \n");
    scanf("%d", &n);
    Sn=(A1+An)*n/2;
    pintf("\n\n\n");
    printf("The sum of the arithmetic sequence is %d", Sn);
}
