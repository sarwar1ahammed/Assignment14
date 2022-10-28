#include <stdio.h>
/*
    A program to calculate the sum of numbers stored in an 
    array of size 10. Takearray values from the user.
*/
int main()
{
    int sum=0, a[10];
    printf("Enter 10 numbers to add them : ");
    for (int i=0; i<=9; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<=9; i++)
        sum = sum + a[i];
    printf("Sum of all 10 numbers is : %d", sum);

    printf("\n");
    return 0;
}
