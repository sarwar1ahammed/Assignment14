#include <stdio.h>
/*
    A program to calculate the average of numbers stored in an 
    array of size 10. Take array values from the user.
*/
int main()
{
    int i, sum=0, a[10];
    float avg;
    printf("Enter 10 numbers to find the average value : ");
    for (i=0; i<=9; i++)
        scanf("%d", &a[i]);

    for (i=0; i<=9; i++)
        sum = sum + a[i];
    avg = sum / 10.0;
    printf("Average of given 10 numbers is : %.2f", avg);

    printf("\n");
    return 0;
}
