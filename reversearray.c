#include <stdio.h>

void main()
{
    int i, n, a[10];
    printf("Enter the size of elements to be added into the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Original is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    void reverse();
    {
        printf("\nReverse is: ");
        for (i = n - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
    }
}

