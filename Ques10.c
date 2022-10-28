#include <stdio.h>
/*
    A program in C to copy the elements of one array into another array.
    Take array values from the user.
*/
int main()
{
    int i, n;
    printf("Enter array range : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter %d number of value in the first array : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &a[i]);

    for (i=0; i<=n-1; i++)
        b[i] = a[i];

    printf("Elemnts present in the second array is : ");
    for (i=0; i<=n-1; i++)
        printf("%d ", b[i]);

        
    printf("\n");
    return 0;
}
