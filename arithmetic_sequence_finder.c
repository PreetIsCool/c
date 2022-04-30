#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A1, d, n;
    printf("Enter the intial term (a1): ");
    scanf("%d", &A1);
    printf("Enter the difference in the arithmetic sequence: ");
    scanf("%d", &d);
    printf("Enter the number of elements in the arithmetic sequence: \n");
    scanf("%d", &n);
    printf("The n-th term of the arithmetic sequence = %d\n", A1+(n-1)*d);
    return 0;
}
