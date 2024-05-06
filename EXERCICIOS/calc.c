#include <stdio.h>

int main()
{
    int i, a, b, result;
    do
    {
        printf("\nEnter a number: \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Enter two numbers: (separeted by space)");
            scanf("%d %d", &a, &b);
            result = a + b;
            printf("\nThe result is %d\n", result);
            break;
        case 2:
            printf("Enter two numbers: (separeted by space)");
            scanf("%d %d", &a, &b);
            result = a - b;
            printf("\nThe result is %d\n", result);
            break;
        case 3:
            printf("Enter two numbers: (separeted by space)");
            scanf("%d %d", &a, &b);
            result = a * b;
            printf("\nThe result is %d\n", result);
            break;
        case 4:
            printf("Enter two numbers: (separeted by space)");
            scanf("%d %d", &a, &b);
            if (b == 0)
            {
                printf("Division by zero is not allowed\n");
            }
            result = a / b;
            printf("\nThe result is %d\n", result);
            break;
        default:
            break;
        }
    } while (i != 5);
    return 0;
}
