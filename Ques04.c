#include <stdio.h>
/*
    A program to find the greatest number stored in an array 
    of size 10. Take array values from the user.
*/
int main()
{
    int i, a[10];
    int maxValue = a[0];
    printf("Enter 10 numbers : ");
    for (i=0; i<10; i++)
        scanf("%d ", &a[i]);

    for (i=0; i<10; i++)
    {
        if (maxValue < a[i])
            maxValue = a[i];
    }

    printf("Maximum value in the given Array is : %d", maxValue);
    
    printf("\n");
    return 0;
}
