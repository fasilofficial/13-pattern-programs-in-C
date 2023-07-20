# 13-pattern-programs-in-C
  This repository contains a collection of 13 pattern programs written in the C programming language. These pattern programs are designed to help programmers strengthen their understanding of loops and conditional statements while creating visually appealing patterns. Whether you are a beginner looking to learn C programming or an experienced programmer exploring pattern-based algorithms, this repository provides a hands-on learning experience with C and pattern-based programming.
</br></br>These C pattern programs can be utilized as a reference or a starting point for your own pattern-based projects. Feel free to fork, modify, and use the code in any way that suits your needs. Happy coding!

1. Sqaure
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
```
```
* * * * * 
* * * * *
* * * * * 
* * * * *
* * * * *
```

2. Increasing Triangle
```
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
}

```
```
* 
* *
* * *
* * * *
* * * * *
```

3. Decreasing Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
```
```
* * * * * 
* * * *
* * *
* *
*
```

4. Right Sided Increasing Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
          * 
        * *
      * * *
    * * * *
  * * * * * 
```

5. Right Sided Decreasing Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
* * * * * 
  * * * *
    * * *
      * *
        *
```

6. Hill Pattern (Pyramid)
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
          *   
        * * * 
      * * * * *   
    * * * * * * * 
  * * * * * * * * * 
```

7. Reverse Hill Pattern (Reverse Pyramid)
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
* * * * * * * * * 
  * * * * * * *   
    * * * * * 
      * * *   
        *     
```

8. Double Hill Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
          *                 * 
        * * *             * * *
      * * * * *         * * * * *
    * * * * * * *     * * * * * * *
  * * * * * * * * * * * * * * * * * *
```

9. Diamond Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
          *     
        * * *   
      * * * * * 
    * * * * * * *   
  * * * * * * * * * 
    * * * * * * * 
      * * * * *   
        * * *     
          *   
```

10. Left Pascal's Triangle
```
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

```
```
*         
* *       
* * *     
* * * *   
* * * * * 
* * * *   
* * *     
* *       
*        
```

11. Right Pascal's Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
          * 
        * * 
      * * * 
    * * * * 
  * * * * * 
    * * * * 
      * * * 
        * * 
          * 
```

12. Butterfly Pattern
```
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
        for (int j = i; j < n - 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
```

13. Sand Glass Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

```
```
  * * * * * * * * * * 
    * * * * * * * * 
      * * * * * *   
        * * * *     
          * *   
          * *   
        * * * * 
      * * * * * * 
    * * * * * * * * 
  * * * * * * * * * *
```

14. Parallel Bar Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
```
```
*          * 
*          * 
*          * 
*          * 
*          * 
```

15. Hollow Square Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
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
```
```
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
```

16. Plus Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n / 2 + 1 || j == n / 2 + 1)
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
```
```
    *     
    *     
* * * * * 
    *     
    *     
```

17. Cross Pattern
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
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
```
```
*       * 
  *   *   
    *     
  *   *   
*       * 
```

18. Hollow Increasing Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == n || i == j)
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
```
```
*
* *       
*   *     
*     *   
* * * * * 
```

19. Hollow Decreasing Triangle
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i + j == n + 1)
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
```
```
* * * * * 
*     *   
*   *     
* *       
*
```

20. Hollow Hill Pattern (Hollow Pyramid)
```
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            if (j == 1 || i == 5)
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
            if (j == i || i == n)
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
```
```
        *         
      *   *       
    *       *     
  *           *   
* * * * * * * * * 
```

21. Hollow Diamond Pattern
```
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

```
```
          *         
        *   *       
      *       *     
    *           *   
  *               * 
    *           * 
      *       *   
        *   *
          *
```
