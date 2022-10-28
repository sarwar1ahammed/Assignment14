#include <stdio.h>
/* 
    A program to find second largest in an array.
    Take array values from the user.
*/
int main()
{
    int n, i, j, swap;
    
    printf("Enter array range : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers of value to sort elements : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &a[i]);

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<=n-1; j++)
        {
            if (a[i] > a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("Second largest number in the array is : %d ", a[n-2]);

        
    printf("\n");
    return 0;
}
