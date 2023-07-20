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
