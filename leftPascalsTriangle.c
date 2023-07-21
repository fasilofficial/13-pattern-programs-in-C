#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
