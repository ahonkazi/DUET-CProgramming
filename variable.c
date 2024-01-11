#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the 4 numbers : \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("\n%d is the maximum value", a);
            }
            else
            {
                printf("\n%d is the maximum value", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("\n%d is the maximum value", b);
        }
        else
        {
            printf("\n%d is the maximum value", d);
        }
    }
    else if (c > d)
    {
        printf("\n%d is the maximum value", c);
    }
    else
    {
        printf("\n%d is the maximum value", d);
    }

    return 0;
}