#include <stdio.h>
/*
    A program to calculate the sum of all even numbers and 
    sum of all odd numbers, which are stored in an array of 
    size 10. Take array values from the user.
*/
int main()
{
    int i, evenSum=0, oddSum=0, a[10];
    printf("Enter 10 numbers as your choice : ");
    for (i=0; i<=9; i++)
        scanf("%d", &a[i]);

    for (i=0; i<=9; i++)
    {
        if (a[i] % 2 == 0)
            evenSum = evenSum + a[i];
        else
            oddSum = oddSum + a[i];

    }
    printf("Sum of all given Even numbers is : %d", evenSum);
    printf("\nSum of all given Odd numbers is : %d", oddSum);


    printf("\n");
    return 0;
}
