#include <stdio.h>
/* 
    A program to sort elements of an array of size 10. 
    Take array values from the user.
*/
int main()
{
    int i, j, swap, a[10];
    printf("Enter 10 nubers to sort elements : \n");
    for (i=0; i<=9; i++)
        scanf("%d", &a[i]);

    for (i=0; i<9; i++)
    {
        for (j=i+1; j<=9; j++)
        {
            if (a[i] > a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for (i=0; i<=9; i++)
        printf("%d ", a[i]);

        
    printf("\n");
    return 0;
}
