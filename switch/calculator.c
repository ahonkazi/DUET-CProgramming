#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    float result = 0.0f;
    char op;

    printf("a operator(+,-,*,/ ) b : ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Invalid operator !");
        break;
    }
    if (result)
    {
        printf("\n%.2f %c %.2f = %.2f", a, op, b, result);
    }
    return 0;
}
