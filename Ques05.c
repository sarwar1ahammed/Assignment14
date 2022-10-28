#include <stdio.h>
/*
    A program to find the smallest number stored in 
    an array of size 10. Take array values from the user.
*/
int main()
{
    int i, a[10];
    int minValue = a[0];
    printf("Enter 10 numbers : ");
    for (i=0; i<10; i++)
        scanf("%d", &a[i]);
    
    for (i=0; i<10; i++)
    {
        if (minValue > a[i])
            minValue = a[i];
    }

    printf("Minimum value of the given Array is : %d", minValue);

    printf("\n");
    return 0;
}
