#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int n, i;
    float num, sum, average;
    printf("Maximum number of input: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d : ", i);
        scanf("%f", &num);
        if (num > 0.0)
        {
            sum += num;
        }
        else
        {
            break;
        }
    }

    average = sum / (i - 1);
    printf("Average = %.2f\n", average);
    printf("Sum = %.2f\n", sum);
    return 0;
}
