#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary_per_hour, total_hours_worked, salary;
    printf("Please enter your salary per hour: ");
    scanf("%f", &salary_per_hour);
    printf("Please enter total hours you have worked in the last month: ");
    scanf("%f", &total_hours_worked);
    salary=salary_per_hour*total_hours_worked;
    printf("\n\n");
    printf("Your salary should be %.2f", salary);
}
