#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            if (j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            if (j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int j = i; j <= n; j++)
        {
            if (j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
