#include <stdio.h>
/*
    A program in C to read n number of values in an array and 
    display it in reverse order. Take array values from the user.
*/
int main()
{
    int i, n;
    printf("Enter array range : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers of value to print in reverse order : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &a[i]);
    
    for (i=n-1; i>=0; i--)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
